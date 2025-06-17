# can OTA 구현

ECU : TMU, CGW, EDT

### OTA 시스템 보안 설계 요약 (make\_bin\_file\_hybrid.py / app.py / download\_file.py)

---

## ✅ 전체 시스템 개요

이 OTA 시스템은 **하이브리드 암호화 (RSA + AES)**, **전자서명**, **SHA256 해시**, **Nonce**, **타임스탬프** 등을 조합하여 **기밀성, 무결성, 인증, 최신성**을 보장합니다.

---

## 📦 1. make\_bin\_file\_hybrid.py – 보안 펌웨어 생성

| 주요 역할      | 설명                                                                                |
| ---------- | --------------------------------------------------------------------------------- |
| 펌웨어 로드     | `firmware.bin` 로드                                                                 |
| 키 로딩       | 서버 RSA 개인키(서명용), 차량 RSA 공개키(AES 키 암호화용)                                           |
| SHA256 해시  | 펌웨어 코드 해싱 → 헤더 포함, 서명 대상                                                          |
| 전자서명 생성    | 해시에 서버 RSA 개인키로 서명 (PKCS#1 v1.5)                                                  |
| AES 대칭키 생성 | 매번 새로운 AES 키 및 nonce 생성                                                           |
| 펌웨어 암호화    | AES CTR 모드로 코드 암호화                                                                |
| AES 키 암호화  | 차량 RSA 공개키로 암호화 (PKCS#1 OAEP)                                                     |
| 헤더 구성      | Magic, Timestamp, ECU ID, Version, Code Len, SHA256 해시, AES Nonce 포함              |
| 최종 파일 생성   | header + enc\_aes\_key + signature + enc\_firmware → `firmware_secure_hybrid.bin` |

### 🔒 보안 보장 요소

* **기밀성**: AES + RSA 하이브리드 암호화
* **무결성**: SHA256 해시 + 전자서명
* **인증**: 서버 개인키 기반 서명
* **최신성**: 타임스탬프 포함

---

## 🌐 2. app.py – OTA 서버 (Flask 기반)

| 기능 분류     | 설명                                                          |
| --------- | ----------------------------------------------------------- |
| 웹 서버 구현   | Flask 기반 API: 업로드/다운로드/버전 보고 등 제공                           |
| 관리자 인증    | `/login`, `/upload_firmware`, `/vehicles`, `/users`는 로그인 필요 |
| 펌웨어 업로드   | `firmware.bin` 업로드 → 보안 처리 대상                               |
| 최신 정보 제공  | `/latest_version`: 최신 버전명, SHA256 해시 제공                     |
| nonce 발급  | `/get_nonce`: 1회용 난수 발급 → 재사용 공격 방지                         |
| 다운로드 제공   | `/ota_download/<filename>`: nonce + 토큰 필요                   |
| ECU 버전 보고 | `/report_versions`: 차량 토큰 기반, versions.json 저장              |
| 보안 로깅     | `audit.log`에 로그인, 다운로드, 보고 기록 저장                            |

### 🔐 보안 보장 요소

* **인증**: 차량 토큰 + 관리자 로그인
* **최신성**: nonce 기반 다운로드 요청
* **무결성 보조**: SHA256 해시 제공
* **감사 가능성**: 로그 기록

---

## 🚗 3. download\_file.py – OTA 클라이언트

| 기능 분류      | 설명                                                                  |
| ---------- | ------------------------------------------------------------------- |
| 서버 통신      | `latest_version`, `get_nonce`, `ota_download`, `report_versions` 요청 |
| 키 로딩       | 차량 RSA 개인키, 서버 RSA 공개키 로딩                                           |
| 펌웨어 다운로드   | nonce 포함된 요청 → firmware\_secure\_hybrid.bin 수신                      |
| 무결성 확인 (1) | 다운로드 완료 후 SHA256 → 서버 제공 해시와 비교                                     |
| 파일 파싱      | header 분석 → Magic, Timestamp, ECU ID, Version, 등 추출                 |
| 최신성 확인     | 타임스탬프가 30일 이내인지 확인                                                  |
| AES 키 복호화  | 차량 개인키로 암호화된 AES 키 복호화                                              |
| 펌웨어 복호화    | AES 키 + nonce로 원본 복원                                                |
| 무결성 확인 (2) | 복호화된 코드의 SHA256과 헤더 해시 비교                                           |
| 전자서명 검증    | 해시 + 전자서명 → 서버 공개키로 검증                                              |
| CANoe 연동   | 시스템 변수 설정 → 사용자 승인 / 결과 확인 / ECU 버전 조회                              |
| 서버에 보고     | OTA 완료 후 ECU 버전 정보를 다시 전송                                           |

### 🔒 보안 보장 요소

* **기밀성**: 복호화 시에만 원본 확인 가능 (RSA + AES)
* **무결성**: 2단계 SHA256 해시 확인
* **인증**: 서버 서명 검증
* **최신성**: 타임스탬프 유효성 검사
* **재사용 방지**: nonce 사용

---

## 🔐 전체 보안 흐름 요약

| 단계         | 적용 보안 요소                                                 |
| ---------- | -------------------------------------------------------- |
| 생성 (서버)    | 인증(서명), 기밀성(RSA+AES), 무결성(SHA256), 최신성(타임스탬프)            |
| 배포 (서버)    | 인증(토큰), 재사용 방지(nonce), 무결성 검증용 해시, 로그 기록                 |
| 설치 (클라이언트) | 기밀성(AES 복호화), 무결성(SHA256x2), 인증(서명 검증), 최신성 검사, nonce 사용 |

---

## System Variable

| NameSpace        | Name      | Detail      | 
| ---------- | ------------------------ |------------------------ |
| CAR    | addSpeed            | 가속도           |
| CAR    | Distance            | 앞차와의 거리    |
| CAR    | vehSpeed            | 차량 속도        |
| CAR    | acc            | 엑셀 on/off        |
| CAR    | brake            | 브레이크  on/off        |
| OTA    | Cur_version[]             | ecu들의 현재 버전        |
| OTA    | Next_version[]            | ecu들의 업데이트 될 버전        |
| OTA    | ECU_id            | target ecu id        |
| OTA    | ECU_ver            | target ecu version        |
| OTA    | Ota_flag            | ota 승인, 거절 진행등 ota 상태        |
| OTA    | Version_num[]            | 1~10까지의 버전 정보        |
| OTA    | OTA_UserSelect            | 승인/거절 입력        |
| OTA    | Progress            | 파일 다운로드 진행률        |



