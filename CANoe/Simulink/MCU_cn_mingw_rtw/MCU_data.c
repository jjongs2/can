/*
 * MCU_data.c
 *
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * Code generation for model "MCU".
 *
 * Model version              : 14.55
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Tue Jun 24 20:25:27 2025
 *
 * Target selection: cn_mingw.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MCU.h"

/* Invariant block signals (default storage) */
const ConstB_MCU_T MCU_ConstB = {
  0.0                                  /* '<S4>/S-Function1' */
};

/* Block parameters (default storage) */
P_MCU_T MCU_P = {
  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S87>/Integral Gain'
   */
  2.5,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S90>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S95>/Proportional Gain'
   */
  4.5,

  /* Mask Parameter: Battery_SOC
   * Referenced by:
   *   '<S23>/Initial it'
   *   '<S26>/Discrete-Time Integrator'
   */
  60.0,

  /* Mask Parameter: CoulombViscousFriction_gain
   * Referenced by: '<S43>/Gain'
   */
  1.0E-6,

  /* Mask Parameter: CoulombViscousFriction_offset
   * Referenced by: '<S43>/Gain1'
   */
  0.0,

  /* Expression: 4
   * Referenced by: '<Root>/AUTO'
   */
  4.0,

  /* Expression: 7
   * Referenced by: '<Root>/Regen_Mode1'
   */
  7.0,

  /* Expression: 6
   * Referenced by: '<Root>/Regen_Mode2'
   */
  6.0,

  /* Expression: 5
   * Referenced by: '<Root>/Regen_Mode3'
   */
  5.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S90>/Integrator'
   */
  5.0E-6,

  /* Expression: 0
   * Referenced by: '<S24>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S25>/Constant'
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S4>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S4>/S-Function'
   */
  0.0,

  /* Expression: mode
   * Referenced by: '<S4>/S-Function1'
   */
  2.0,

  /* Expression: zeros(1,Switches)
   * Referenced by: '<S44>/Constant'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S23>/Unit Delay'
   */
  0.0,

  /* Expression: 2*Batt.E0
   * Referenced by: '<S23>/Saturation'
   */
  112.29555950835093,

  /* Expression: 0
   * Referenced by: '<S23>/Saturation'
   */
  0.0,

  /* Expression: eye(2,2)
   * Referenced by: '<S32>/I'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: eye(2,2)
   * Referenced by: '<S36>/u5'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: -PM.R/PM.L
   * Referenced by: '<S32>/-R//L'
   */
  -659.72222222222229,

  /* Expression: Ts/PM.DSSmethod
   * Referenced by: '<S36>/Tustin: Ts//2 BE : Ts'
   */
  5.0E-6,

  /* Expression: Ts
   * Referenced by: '<S36>/wbase3'
   */
  5.0E-6,

  /* Expression: PM.x0_d
   * Referenced by: '<S38>/Unit Delay'
   */
  { 0.0, 0.0 },

  /* Expression: [ 2  1   -2  1  1;   -1  1  1  -2  1 ]
   * Referenced by: '<S32>/M(2,5)'
   */
  { 2.0, -1.0, 1.0, 1.0, -2.0, 1.0, 1.0, -2.0, 1.0, 1.0 },

  /* Expression: 1/(3*PM.L)
   * Referenced by: '<S32>/1//(3*L)'
   */
  23148.14814814815,

  /* Expression: 1/PM.DSSmethod
   * Referenced by: '<S36>/Tustin: 1//2 BE : 1.0'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S34>/Discrete-Time Integrator1'
   */
  5.0E-6,

  /* Expression: PM.tho+PM.thOffest
   * Referenced by: '<S34>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: PM.trap
   * Referenced by: '<S39>/Saturation'
   */
  0.5,

  /* Expression: -PM.trap
   * Referenced by: '<S39>/Saturation'
   */
  -0.5,

  /* Expression: PM.Flux/PM.trap
   * Referenced by: '<S39>/Gain4'
   */
  0.011875000000000002,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S34>/Discrete-Time Integrator'
   */
  5.0E-6,

  /* Expression: PM.wmo
   * Referenced by: '<S34>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: PM.p
   * Referenced by: '<S34>/Gain'
   */
  8.0,

  /* Expression: PM.trap
   * Referenced by: '<S40>/Saturation'
   */
  0.5,

  /* Expression: -PM.trap
   * Referenced by: '<S40>/Saturation'
   */
  -0.5,

  /* Expression: PM.Flux/PM.trap
   * Referenced by: '<S40>/Gain4'
   */
  0.011875000000000002,

  /* Expression: PM.trap
   * Referenced by: '<S41>/Saturation'
   */
  0.5,

  /* Expression: -PM.trap
   * Referenced by: '<S41>/Saturation'
   */
  -0.5,

  /* Expression: PM.Flux/PM.trap
   * Referenced by: '<S41>/Gain4'
   */
  0.011875000000000002,

  /* Expression: 0
   * Referenced by: '<S48>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: StateSpace_P1_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.Ts
   * Referenced by: '<S48>/State-Space'
   */
  5.0E-6,

  /* Computed Parameter: StateSpace_P2_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.A
   * Referenced by: '<S48>/State-Space'
   */
  0.99335548172757482,

  /* Computed Parameter: StateSpace_P3_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 9.0 },

  /* Expression: S.B
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1328.9036544850499, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P4_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 9.0, 1.0 },

  /* Expression: S.C
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00049833887043189385, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P5_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 9.0, 9.0 },

  /* Expression: S.D
   * Referenced by: '<S48>/State-Space'
   */
  { -45652.17391304348, 45652.17391304348, -2173.9130434782605,
    2173.9130434782605, -2173.91304347826, 2173.91304347826, 0.5,
    43478.260869565216, 4.5474735088646412E-13, 45652.17391304348,
    -45652.17391304348, 2173.9130434782605, -2173.9130434782605,
    2173.91304347826, -2173.91304347826, 0.5, -43478.260869565216,
    -4.5474735088646412E-13, -2173.91304347826, 2173.91304347826,
    -45652.173913043473, 45652.173913043473, -2173.91304347826, 2173.91304347826,
    0.5, -43478.260869565216, 43478.260869565216, 2173.91304347826,
    -2173.91304347826, 45652.173913043473, -45652.173913043473, 2173.91304347826,
    -2173.91304347826, 0.5, 43478.260869565216, -43478.260869565216,
    -2173.9130434782605, 2173.9130434782605, -2173.9130434782605,
    2173.9130434782605, -45652.173913043473, 45652.173913043473, 0.5, 0.0,
    -43478.260869565209, 2173.9130434782605, -2173.9130434782605,
    2173.9130434782605, -2173.9130434782605, 45652.173913043473,
    -45652.173913043473, 0.5, 0.0, 43478.260869565209, 0.5, 0.5,
    0.49999999999999994, 0.5, 0.49999999999999994, 0.5, 99.667789086378761,
    -5.5511151231257827E-17, 0.0, 43478.260869565216, -43478.260869565216, 0.0,
    0.0, -43478.260869565216, 43478.260869565216, 0.0, -43478.260869565216,
    -43478.260869565216, -4.5474735088646412E-13, 4.5474735088646412E-13,
    43478.260869565209, -43478.260869565209, -43478.260869565216,
    43478.260869565216, 0.0, 43478.260869565209, -86956.521739130432 },

  /* Computed Parameter: StateSpace_P6_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.x0
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P7_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.EnableUseOfTLC
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P8_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 3.0 },

  /* Expression: S.NonLinearDim
   * Referenced by: '<S48>/State-Space'
   */
  { 2.0, 2.0, 2.0 },

  /* Computed Parameter: StateSpace_P9_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P10_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 2.0 },

  /* Expression: S.NonLinear_Inputs
   * Referenced by: '<S48>/State-Space'
   */
  { 8.0, 9.0 },

  /* Computed Parameter: StateSpace_P11_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 2.0 },

  /* Expression: S.NonLinear_Outputs
   * Referenced by: '<S48>/State-Space'
   */
  { 8.0, 9.0 },

  /* Computed Parameter: StateSpace_P12_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 3.0 },

  /* Expression: S.NonLinear_InitialOutputs
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P13_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.NonLinearIterative
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P14_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.NonLinear_SizeVI
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P15_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P16_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.NonLinear_Method
   * Referenced by: '<S48>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_P17_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.Nonlinear_Tolerance
   * Referenced by: '<S48>/State-Space'
   */
  0.0001,

  /* Computed Parameter: StateSpace_P18_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: double(nMaxIteration)
   * Referenced by: '<S48>/State-Space'
   */
  100.0,

  /* Computed Parameter: StateSpace_P19_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: double(ContinueOnMaxIteration)
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P20_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 6.0 },

  /* Expression: S.SwitchResistance
   * Referenced by: '<S48>/State-Space'
   */
  { 0.001, 0.001, 0.001, 0.001, 0.001, 0.001 },

  /* Computed Parameter: StateSpace_P21_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 6.0 },

  /* Expression: S.SwitchType
   * Referenced by: '<S48>/State-Space'
   */
  { 7.0, 7.0, 7.0, 7.0, 7.0, 7.0 },

  /* Computed Parameter: StateSpace_P22_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 6.0, 1.0 },

  /* Expression: S.SwitchGateInitialValue
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P23_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 6.0 },

  /* Expression: S.OutputsToResetToZero
   * Referenced by: '<S48>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P24_Size
   * Referenced by: '<S48>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: double(S.TBEON)
   * Referenced by: '<S48>/State-Space'
   */
  0.0,

  /* Expression: 30/pi
   * Referenced by: '<Root>/Gain2'
   */
  9.5492965855137211,

  /* Expression: 5
   * Referenced by: '<Root>/Constant'
   */
  5.0,

  /* Expression: 180/pi
   * Referenced by: '<S42>/rad2deg'
   */
  57.295779513082323,

  /* Expression: -180
   * Referenced by: '<S37>/Constant4'
   */
  -180.0,

  /* Expression: 0
   * Referenced by: '<S37>/Constant5'
   */
  0.0,

  /* Expression: 1/PM.DSSmethod
   * Referenced by: '<S38>/BE=1 Tustin=1//2'
   */
  1.0,

  /* Expression: Ts
   * Referenced by: '<S38>/Ts'
   */
  5.0E-6,

  /* Expression: -60
   * Referenced by: '<S37>/Constant'
   */
  -60.0,

  /* Expression: 120
   * Referenced by: '<S37>/Constant1'
   */
  120.0,

  /* Expression: 60
   * Referenced by: '<S37>/Constant2'
   */
  60.0,

  /* Expression: -120
   * Referenced by: '<S37>/Constant3'
   */
  -120.0,

  /* Expression: PM.p
   * Referenced by: '<S32>/Gain3'
   */
  8.0,

  /* Expression: 1/PM.J
   * Referenced by: '<S34>/Gain2'
   */
  5263.1578947368416,

  /* Expression: Batt.Q
   * Referenced by: '<S23>/capacity'
   */
  93.239999999999071,

  /* Expression: 1
   * Referenced by: '<S20>/do not delete this gain'
   */
  1.0,

  /* Computed Parameter: CoulombCounter_gainval
   * Referenced by: '<S23>/Coulomb Counter'
   */
  5.0E-6,

  /* Expression: Batt.Q*3600
   * Referenced by: '<S23>/Coulomb Counter'
   */
  335663.99999999668,

  /* Expression: -inf
   * Referenced by: '<S23>/Coulomb Counter'
   */
  -INFINITY,

  /* Expression: 1/3600
   * Referenced by: '<S23>/Gain1'
   */
  0.00027777777777777778,

  /* Expression: Batt.kcsat
   * Referenced by: '<S23>/Constant1'
   */
  0.1,

  /* Expression: 100
   * Referenced by: '<S28>/Gain1'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S28>/Saturation'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S28>/Saturation'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
   * Referenced by: '<S26>/Discrete-Time Integrator'
   */
  5.0E-6,

  /* Expression: [1-exp(-Ts/(Batt_Tr/3))]
   * Referenced by: '<S23>/Current Filter'
   */
  4.9999987494775411E-7,

  /* Expression: [1 -exp(-Ts/(Batt_Tr/3))]
   * Referenced by: '<S23>/Current Filter'
   */
  { 1.0, -0.999999500000125 },

  /* Expression: 0
   * Referenced by: '<S23>/Current Filter'
   */
  0.0,

  /* Expression: Batt.K
   * Referenced by: '<S23>/constantK'
   */
  0.035268523828226796,

  /* Expression: Batt.A
   * Referenced by: '<S23>/constantA'
   */
  0.83744872582453345,

  /* Expression: Batt.B
   * Referenced by: '<S23>/constantB'
   */
  0.95409408130916984,

  /* Expression: Batt.R
   * Referenced by: '<S23>/Gain'
   */
  0.006,

  /* Expression: Batt.E0
   * Referenced by: '<S23>/Constant'
   */
  56.147779754175467,

  /* Expression: Batt.B/3600
   * Referenced by: '<S26>/Gain'
   */
  0.00026502613369699165,

  /* Expression: Batt.A
   * Referenced by: '<S26>/Gain1'
   */
  0.83744872582453345,

  /* Expression: 3600
   * Referenced by: '<S23>/Gain2'
   */
  3600.0,

  /* Expression: PM.DSSmethod==2
   * Referenced by: '<S36>/u1'
   */
  false,

  /* Start of '<S16>/Custom Relay2' */
  {
    /* Expression: 0
     * Referenced by: '<S47>/OFF'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S47>/ON'
     */
    1.0,

    /* Expression: 1
     * Referenced by: '<S47>/offset'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S47>/rev'
     */
    -1.0,

    /* Expression: 0
     * Referenced by: '<S47>/Delay'
     */
    0.0
  }
  ,

  /* End of '<S16>/Custom Relay2' */

  /* Start of '<S16>/Custom Relay1' */
  {
    /* Expression: 0
     * Referenced by: '<S46>/OFF'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S46>/ON'
     */
    1.0,

    /* Expression: 1
     * Referenced by: '<S46>/offset'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S46>/rev'
     */
    -1.0,

    /* Expression: 0
     * Referenced by: '<S46>/Delay'
     */
    0.0
  }
  ,

  /* End of '<S16>/Custom Relay1' */

  /* Start of '<S16>/Custom Relay' */
  {
    /* Expression: 0
     * Referenced by: '<S45>/OFF'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S45>/ON'
     */
    1.0,

    /* Expression: 1
     * Referenced by: '<S45>/offset'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S45>/rev'
     */
    -1.0,

    /* Expression: 0
     * Referenced by: '<S45>/Delay'
     */
    0.0
  }
  /* End of '<S16>/Custom Relay' */
};
