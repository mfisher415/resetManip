/*
 * BasicModelTarget_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "BasicModelTarget.mdl".
 *
 * Model version              : 1.978
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Tue Mar 08 13:52:40 2011
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BasicModelTarget.h"
#include "rtw_capi.h"
#include "BasicModelTarget_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Clock",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "FilterCutoffFreq",
    "", 0, 0, 0, 0, 1 },

  { 2, 0, "FilterZeta",
    "", 0, 0, 0, 0, 1 },

  { 3, 0, "Input Param",
    "", 0, 0, 0, 0, 1 },

  { 4, 0, "Input Param1",
    "", 0, 0, 0, 0, 1 },

  { 5, 0, "Input Param2",
    "", 0, 0, 0, 0, 1 },

  { 6, 0, "Input Param3",
    "", 0, 0, 0, 0, 1 },

  { 7, 0, "InputParam3",
    "", 0, 0, 0, 0, 1 },

  { 8, 0, "RESET",
    "", 0, 0, 0, 0, 1 },

  { 9, 0, "E Gain",
    "", 0, 0, 0, 0, 2 },

  { 10, 0, "S Gain",
    "", 0, 0, 0, 0, 2 },

  { 11, 0, "S Gain3",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "S Gain4",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "Divide",
    "", 0, 0, 0, 0, 0 },

  { 14, 0, "Product",
    "", 0, 0, 0, 0, 0 },

  { 15, 0, "Product1",
    "", 0, 0, 0, 0, 0 },

  { 16, 0, "Product2",
    "", 0, 0, 0, 0, 0 },

  { 17, 0, "Product3",
    "", 0, 0, 0, 0, 0 },

  { 18, 0, "Rate Transition",
    "", 0, 1, 1, 0, 3 },

  { 19, 0, "Rate Transition1",
    "", 0, 0, 0, 0, 4 },

  { 20, 0, "Rate Transition2",
    "", 0, 0, 0, 0, 4 },

  { 21, 0, "Saturation",
    "", 0, 0, 0, 0, 0 },

  { 22, 0, "Saturation1",
    "", 0, 0, 0, 0, 0 },

  { 23, 0, "Saturation2",
    "", 0, 0, 0, 0, 0 },

  { 24, 0, "Pack1",
    "", 0, 1, 1, 0, 1 },

  { 25, 0, "Sum",
    "", 0, 0, 0, 0, 0 },

  { 26, 0, "Sum1",
    "", 0, 0, 0, 0, 0 },

  { 27, 0, "Sum2",
    "", 0, 0, 0, 0, 0 },

  { 28, 0, "Zero-Order Hold",
    "", 0, 0, 0, 0, 2 },

  { 29, 0, "Zero-Order Hold1",
    "", 0, 0, 0, 0, 2 },

  { 30, 0, " Calculate Additional Forces from UDP input/Fcn3",
    "", 0, 0, 0, 0, 1 },

  { 31, 0, " Calculate Additional Forces from UDP input/Gain",
    "", 0, 0, 0, 0, 1 },

  { 32, 0, " Calculate Additional Forces from UDP input/Gain1",
    "", 0, 0, 2, 0, 0 },

  { 33, 0, " Calculate Additional Forces from UDP input/Divide",
    "", 0, 0, 2, 0, 1 },

  { 34, 0, " Calculate Additional Forces from UDP input/Product1",
    "", 0, 0, 2, 0, 1 },

  { 35, 0, " Calculate Additional Forces from UDP input/Product2",
    "", 0, 0, 0, 0, 0 },

  { 36, 0, " Calculate Additional Forces from UDP input/Product3",
    "", 0, 0, 0, 0, 0 },

  { 37, 0, " Calculate Additional Forces from UDP input/Product4",
    "", 0, 0, 2, 0, 0 },

  { 38, 0, " Calculate Additional Forces from UDP input/Product5",
    "", 0, 0, 0, 0, 0 },

  { 39, 0, " Calculate Additional Forces from UDP input/Product6",
    "", 0, 0, 2, 0, 0 },

  { 40, 0, " Calculate Additional Forces from UDP input/Product7",
    "", 0, 0, 0, 0, 0 },

  { 41, 0, " Calculate Additional Forces from UDP input/Product8",
    "", 0, 0, 0, 0, 0 },

  { 42, 0, " Calculate Additional Forces from UDP input/Product9",
    "", 0, 0, 0, 0, 0 },

  { 43, 0, " Calculate Additional Forces from UDP input/Rate Transition3",
    "", 0, 1, 3, 0, 1 },

  { 44, 0, " Calculate Additional Forces from UDP input/Saturation",
    "", 0, 0, 0, 0, 0 },

  { 45, 0, " Calculate Additional Forces from UDP input/Receive/p1",
    "", 0, 1, 3, 0, 3 },

  { 46, 0, " Calculate Additional Forces from UDP input/Receive/p2",
    "", 1, 0, 0, 0, 3 },

  { 47, 0, " Calculate Additional Forces from UDP input/Unpack/p1",
    "", 0, 0, 0, 0, 1 },

  { 48, 0, " Calculate Additional Forces from UDP input/Unpack/p2",
    "", 1, 0, 0, 0, 1 },

  { 49, 0, " Calculate Additional Forces from UDP input/Unpack/p3",
    "", 2, 0, 0, 0, 1 },

  { 50, 0, " Calculate Additional Forces from UDP input/Unpack/p4",
    "", 3, 0, 0, 0, 1 },

  { 51, 0, " Calculate Additional Forces from UDP input/Unpack/p5",
    "", 4, 0, 0, 0, 1 },

  { 52, 0, " Calculate Additional Forces from UDP input/Unpack/p6",
    "", 5, 0, 0, 0, 1 },

  { 53, 0, " Calculate Additional Forces from UDP input/Unpack/p7",
    "", 6, 0, 0, 0, 1 },

  { 54, 0, " Calculate Additional Forces from UDP input/Subtract1",
    "", 0, 0, 0, 0, 0 },

  { 55, 0, " Calculate Additional Forces from UDP input/Sum",
    "", 0, 0, 0, 0, 0 },

  { 56, 0, " Calculate Additional Forces from UDP input/Sum of Forces - X",
    "", 0, 0, 0, 0, 0 },

  { 57, 0, " Calculate Additional Forces from UDP input/Sum of Forces - Y",
    "", 0, 0, 0, 0, 0 },

  { 58, 0, " Calculate Additional Forces from UDP input/Sum1",
    "", 0, 0, 2, 0, 1 },

  { 59, 0, " Calculate Additional Forces from UDP input/Sum2",
    "", 0, 0, 0, 0, 0 },

  { 60, 0, " Calculate Additional Forces from UDP input/Dot Product",
    "", 0, 0, 0, 0, 0 },

  { 61, 0, " Pillow Subsystem]/Rect Field",
    "", 0, 0, 0, 0, 1 },

  { 62, 0, " Pillow Subsystem]/Dot Product",
    "", 0, 0, 0, 0, 0 },

  { 63, 0, " Pillow Subsystem]/Fcn1",
    "", 0, 0, 0, 0, 1 },

  { 64, 0, " Pillow Subsystem]/Fcn3",
    "", 0, 0, 0, 0, 1 },

  { 65, 0, " Pillow Subsystem]/Fcn4",
    "", 0, 0, 0, 0, 1 },

  { 66, 0, " Pillow Subsystem]/Gain1",
    "", 0, 0, 0, 0, 1 },

  { 67, 0, " Pillow Subsystem]/Gain2",
    "", 0, 0, 0, 0, 1 },

  { 68, 0, " Pillow Subsystem]/Gain3",
    "", 0, 0, 0, 0, 1 },

  { 69, 0, " Pillow Subsystem]/Divide",
    "", 0, 0, 2, 0, 1 },

  { 70, 0, " Pillow Subsystem]/Product1",
    "", 0, 0, 2, 0, 1 },

  { 71, 0, " Pillow Subsystem]/Product2",
    "", 0, 0, 2, 0, 0 },

  { 72, 0, " Pillow Subsystem]/Product3",
    "", 0, 0, 2, 0, 0 },

  { 73, 0, " Pillow Subsystem]/Product4",
    "", 0, 0, 0, 0, 0 },

  { 74, 0, " Pillow Subsystem]/Product5",
    "", 0, 0, 0, 0, 0 },

  { 75, 0, " Pillow Subsystem]/Product6",
    "", 0, 0, 0, 0, 0 },

  { 76, 0, " Pillow Subsystem]/Product7",
    "", 0, 0, 0, 0, 1 },

  { 77, 0, " Pillow Subsystem]/Product8",
    "", 0, 0, 0, 0, 0 },

  { 78, 0, " Pillow Subsystem]/Saturation1",
    "", 0, 0, 0, 0, 0 },

  { 79, 0, " Pillow Subsystem]/Ave X",
    "", 0, 0, 0, 0, 1 },

  { 80, 0, " Pillow Subsystem]/Ave X1",
    "", 0, 0, 0, 0, 1 },

  { 81, 0, " Pillow Subsystem]/Ave X2",
    "", 0, 0, 0, 0, 1 },

  { 82, 0, " Pillow Subsystem]/Ave X3",
    "", 0, 0, 2, 0, 0 },

  { 83, 0, " Pillow Subsystem]/Ave Y",
    "", 0, 0, 0, 0, 1 },

  { 84, 0, " Pillow Subsystem]/Radial Vec",
    "", 0, 0, 2, 0, 1 },

  { 85, 0, " Pillow Subsystem]/Sum of Forces - X",
    "", 0, 0, 0, 0, 0 },

  { 86, 0, " Pillow Subsystem]/Sum of Forces - Y",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "Endpoint Forces to Motor Torques/Fxsin(th2)",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "Endpoint Forces to Motor Torques/Fxsin(th2)1",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "Endpoint Forces to Motor Torques/Fxsin(th2)2",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "Endpoint Forces to Motor Torques/Fxsin(th2)3",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "Endpoint Forces to Motor Torques/Sum",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "Endpoint Forces to Motor Torques/Sum1",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "Filtered  Velocity Calculations/Derivative1",
    "", 0, 0, 0, 0, 0 },

  { 94, 0, "Filtered  Velocity Calculations/Derivative2",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "Filtered  Velocity Calculations/Derivative3",
    "", 0, 0, 0, 0, 0 },

  { 96, 0, "Filtered  Velocity Calculations/Derivative4",
    "", 0, 0, 0, 0, 0 },

  { 97, 0, "Filtered  Velocity Calculations/Derivative5",
    "", 0, 0, 0, 0, 0 },

  { 98, 0, "Filtered  Velocity Calculations/Derivative6",
    "", 0, 0, 0, 0, 0 },

  { 99, 0, "Filtered  Velocity Calculations/Derivative7",
    "", 0, 0, 0, 0, 0 },

  { 100, 0, "Filtered  Velocity Calculations/Derivative8",
    "", 0, 0, 0, 0, 0 },

  { 101, 0, "Filtered  Velocity Calculations/Transfer Fcn1",
    "", 0, 0, 0, 0, 0 },

  { 102, 0, "Filtered  Velocity Calculations/Transfer Fcn2",
    "", 0, 0, 0, 0, 0 },

  { 103, 0, "Filtered  Velocity Calculations/Transfer Fcn8",
    "", 0, 0, 0, 0, 0 },

  { 104, 0, "Filtered  Velocity Calculations/Transfer Fcn9",
    "", 0, 0, 0, 0, 0 },

  { 105, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/squared",
    "", 0, 0, 0, 0, 0 },

  { 106, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/squared1",
    "", 0, 0, 0, 0, 0 },

  { 107, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/th1-th2-pi",
    "", 0, 0, 0, 0, 1 },

  { 108, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/th1-th2-pi1",
    "", 0, 0, 0, 0, 1 },

  { 109, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/Gain",
    "", 0, 0, 0, 0, 1 },

  { 110, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/Matrix Multiply",
    "", 0, 0, 2, 0, 0 },

  { 111, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/Matrix Multiply1",
    "", 0, 0, 2, 0, 0 },

  { 112, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/Sum",
    "", 0, 0, 2, 0, 0 },

  { 113, 0, "Subsystem/cos_th1",
    "", 0, 0, 0, 0, 1 },

  { 114, 0, "Subsystem/sin_th2",
    "", 0, 0, 0, 0, 1 },

  { 115, 0, "Subsystem/Xy",
    "", 0, 0, 0, 0, 4 },

  { 116, 0, "Subsystem/Xy2",
    "", 0, 0, 0, 0, 4 },

  { 117, 0, "Subsystem/f",
    "", 0, 0, 0, 0, 4 },

  { 118, 0, "Subsystem/f1",
    "", 0, 0, 0, 0, 4 },

  { 119, 0, "Subsystem/Fxcos(th2)",
    "", 0, 0, 0, 0, 1 },

  { 120, 0, "Subsystem/Fxsin(th2)",
    "", 0, 0, 0, 0, 1 },

  { 121, 0, "Subsystem/Fycos(th2)",
    "", 0, 0, 0, 0, 1 },

  { 122, 0, "Subsystem/Fysin(th2)",
    "", 0, 0, 0, 0, 1 },

  { 123, 0, "Subsystem/Rate Transition",
    "", 0, 0, 0, 0, 1 },

  { 124, 0, "Subsystem/Rate Transition1",
    "", 0, 0, 0, 0, 1 },

  { 125, 0, "Subsystem/PCI-6031E AD/p1",
    "", 0, 0, 0, 0, 4 },

  { 126, 0, "Subsystem/PCI-6031E AD/p2",
    "", 1, 0, 0, 0, 4 },

  { 127, 0, "Subsystem/PCI-6031E AD/p3",
    "", 2, 0, 0, 0, 4 },

  { 128, 0, "Subsystem/PCI-6031E AD/p4",
    "", 3, 0, 0, 0, 4 },

  { 129, 0, "Subsystem/PCI-6031E AD/p5",
    "", 4, 0, 0, 0, 4 },

  { 130, 0, "Subsystem/PCI-6031E AD/p6",
    "", 5, 0, 0, 0, 4 },

  { 131, 0, "Subsystem/Sum",
    "", 0, 0, 0, 0, 1 },

  { 132, 0, "Subsystem/Sum1",
    "", 0, 0, 0, 0, 1 },

  { 133, 0,
    "X Direction  Virtual DOF + Endpoint Force Calculation /Function1: just direct transmissiion for now",
    "", 0, 0, 0, 0, 0 },

  { 134, 0,
    "X Direction  Virtual DOF + Endpoint Force Calculation /Function2: Can be a function of states and parameters",
    "", 0, 0, 0, 0, 0 },

  { 135, 0, "X Direction  Virtual DOF + Endpoint Force Calculation /Integrator",
    "", 0, 0, 0, 0, 0 },

  { 136, 0,
    "Y Direction  Virtual DOF + Endpoint Force Calculation/Function1: just direct transmissiion for now",
    "", 0, 0, 0, 0, 0 },

  { 137, 0,
    "Y Direction  Virtual DOF + Endpoint Force Calculation/Function2: Can be a function of states and parameters",
    "", 0, 0, 0, 0, 0 },

  { 138, 0, "Y Direction  Virtual DOF + Endpoint Force Calculation/Integrator",
    "", 0, 0, 0, 0, 0 },

  { 139, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain",
    "", 0, 0, 4, 0, 1 },

  { 140, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain1",
    "", 0, 0, 4, 0, 1 },

  { 141, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain2",
    "", 0, 0, 4, 0, 1 },

  { 142, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain3",
    "", 0, 0, 4, 0, 1 },

  { 143, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Add",
    "", 0, 0, 4, 0, 1 },

  { 144, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain",
    "", 0, 0, 4, 0, 1 },

  { 145, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain1",
    "", 0, 0, 4, 0, 1 },

  { 146, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain2",
    "", 0, 0, 4, 0, 1 },

  { 147, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain3",
    "", 0, 0, 4, 0, 1 },

  { 148, 0,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Add",
    "", 0, 0, 4, 0, 1 },

  { 149, 0, "Subsystem/Elbow Angle/Pulse Generator1",
    "", 0, 0, 0, 0, 1 },

  { 150, 0, "Subsystem/Elbow Angle/Encoder Radians",
    "", 0, 0, 0, 0, 1 },

  { 151, 0, "Subsystem/Elbow Angle/Offset in Radians",
    "", 0, 0, 0, 0, 1 },

  { 152, 0, "Subsystem/Elbow Angle/Bit1/p1",
    "", 0, 0, 0, 0, 4 },

  { 153, 0, "Subsystem/Elbow Angle/Bit1/p2",
    "", 1, 0, 0, 0, 4 },

  { 154, 0, "Subsystem/Elbow Angle/Bits1-8 1/p1",
    "", 0, 0, 0, 0, 4 },

  { 155, 0, "Subsystem/Elbow Angle/Bits1-8 1/p2",
    "", 1, 0, 0, 0, 4 },

  { 156, 0, "Subsystem/Elbow Angle/Bits1-8 1/p3",
    "", 2, 0, 0, 0, 4 },

  { 157, 0, "Subsystem/Elbow Angle/Bits1-8 1/p4",
    "", 3, 0, 0, 0, 4 },

  { 158, 0, "Subsystem/Elbow Angle/Bits1-8 1/p5",
    "", 4, 0, 0, 0, 4 },

  { 159, 0, "Subsystem/Elbow Angle/Bits1-8 1/p6",
    "", 5, 0, 0, 0, 4 },

  { 160, 0, "Subsystem/Elbow Angle/Bits1-8 1/p7",
    "", 6, 0, 0, 0, 4 },

  { 161, 0, "Subsystem/Elbow Angle/Bits1-8 1/p8",
    "", 7, 0, 0, 0, 4 },

  { 162, 0, "Subsystem/Elbow Angle/Bits9-1/p1",
    "", 0, 0, 0, 0, 4 },

  { 163, 0, "Subsystem/Elbow Angle/Bits9-1/p2",
    "", 1, 0, 0, 0, 4 },

  { 164, 0, "Subsystem/Elbow Angle/Bits9-1/p3",
    "", 2, 0, 0, 0, 4 },

  { 165, 0, "Subsystem/Elbow Angle/Bits9-1/p4",
    "", 3, 0, 0, 0, 4 },

  { 166, 0, "Subsystem/Elbow Angle/Bits9-1/p5",
    "", 4, 0, 0, 0, 4 },

  { 167, 0, "Subsystem/Elbow Angle/Bits9-1/p6",
    "", 5, 0, 0, 0, 4 },

  { 168, 0, "Subsystem/Elbow Angle/Bits9-1/p7",
    "", 6, 0, 0, 0, 4 },

  { 169, 0, "Subsystem/Elbow Angle/Bits9-1/p8",
    "", 7, 0, 0, 0, 4 },

  { 170, 0, "Subsystem/Elbow Angle/Sum",
    "", 0, 0, 0, 0, 1 },

  { 171, 0, "Subsystem/Elbow Angle/Unit Delay",
    "", 0, 0, 5, 0, 4 },

  { 172, 0, "Subsystem/Elbow Angle/Encoder Decimal",
    "", 0, 0, 0, 0, 1 },

  { 173, 0, "Subsystem/Jacobian-Cartesian Transformation/J00",
    "", 0, 0, 0, 0, 1 },

  { 174, 0, "Subsystem/Jacobian-Cartesian Transformation/J01",
    "", 0, 0, 0, 0, 1 },

  { 175, 0, "Subsystem/Jacobian-Cartesian Transformation/J10",
    "", 0, 0, 0, 0, 1 },

  { 176, 0, "Subsystem/Jacobian-Cartesian Transformation/J11",
    "", 0, 0, 0, 0, 1 },

  { 177, 0, "Subsystem/Jacobian-Cartesian Transformation/Sum",
    "", 0, 0, 0, 0, 1 },

  { 178, 0, "Subsystem/Jacobian-Cartesian Transformation/Sum1",
    "", 0, 0, 0, 0, 1 },

  { 179, 0, "Subsystem/Shoulder Angle/Pulse Generator",
    "", 0, 0, 0, 0, 1 },

  { 180, 0, "Subsystem/Shoulder Angle/Offset in Radians",
    "", 0, 0, 0, 0, 1 },

  { 181, 0, "Subsystem/Shoulder Angle/Product1",
    "", 0, 0, 0, 0, 1 },

  { 182, 0, "Subsystem/Shoulder Angle/Bit17/p1",
    "", 0, 0, 0, 0, 4 },

  { 183, 0, "Subsystem/Shoulder Angle/Bit17/p2",
    "", 1, 0, 0, 0, 4 },

  { 184, 0, "Subsystem/Shoulder Angle/Bits1-8 /p1",
    "", 0, 0, 0, 0, 4 },

  { 185, 0, "Subsystem/Shoulder Angle/Bits1-8 /p2",
    "", 1, 0, 0, 0, 4 },

  { 186, 0, "Subsystem/Shoulder Angle/Bits1-8 /p3",
    "", 2, 0, 0, 0, 4 },

  { 187, 0, "Subsystem/Shoulder Angle/Bits1-8 /p4",
    "", 3, 0, 0, 0, 4 },

  { 188, 0, "Subsystem/Shoulder Angle/Bits1-8 /p5",
    "", 4, 0, 0, 0, 4 },

  { 189, 0, "Subsystem/Shoulder Angle/Bits1-8 /p6",
    "", 5, 0, 0, 0, 4 },

  { 190, 0, "Subsystem/Shoulder Angle/Bits1-8 /p7",
    "", 6, 0, 0, 0, 4 },

  { 191, 0, "Subsystem/Shoulder Angle/Bits1-8 /p8",
    "", 7, 0, 0, 0, 4 },

  { 192, 0, "Subsystem/Shoulder Angle/Bits9-16/p1",
    "", 0, 0, 0, 0, 4 },

  { 193, 0, "Subsystem/Shoulder Angle/Bits9-16/p2",
    "", 1, 0, 0, 0, 4 },

  { 194, 0, "Subsystem/Shoulder Angle/Bits9-16/p3",
    "", 2, 0, 0, 0, 4 },

  { 195, 0, "Subsystem/Shoulder Angle/Bits9-16/p4",
    "", 3, 0, 0, 0, 4 },

  { 196, 0, "Subsystem/Shoulder Angle/Bits9-16/p5",
    "", 4, 0, 0, 0, 4 },

  { 197, 0, "Subsystem/Shoulder Angle/Bits9-16/p6",
    "", 5, 0, 0, 0, 4 },

  { 198, 0, "Subsystem/Shoulder Angle/Bits9-16/p7",
    "", 6, 0, 0, 0, 4 },

  { 199, 0, "Subsystem/Shoulder Angle/Bits9-16/p8",
    "", 7, 0, 0, 0, 4 },

  { 200, 0, "Subsystem/Shoulder Angle/Sum",
    "", 0, 0, 0, 0, 1 },

  { 201, 0, "Subsystem/Shoulder Angle/Unit Delay",
    "", 0, 0, 5, 0, 4 },

  { 202, 0, "Subsystem/Shoulder Angle/Dot Product",
    "", 0, 0, 0, 0, 1 },

  { 203, 0, "Subsystem/Elbow Angle/Parity/Math Function",
    "", 0, 0, 0, 0, 4 },

  { 204, 0, "Subsystem/Elbow Angle/Parity/Sum",
    "", 0, 0, 0, 0, 4 },

  { 205, 0, "Subsystem/Shoulder Angle/Parity/Math Function",
    "", 0, 0, 0, 0, 4 },

  { 206, 0, "Subsystem/Shoulder Angle/Parity/Sum",
    "", 0, 0, 0, 0, 4 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 207, "FilterCutoffFreq",
    "Value", 0, 0, 0 },

  { 208, "FilterZeta",
    "Value", 0, 0, 0 },

  { 209, "Input Param",
    "Value", 0, 0, 0 },

  { 210, "Input Param1",
    "Value", 0, 0, 0 },

  { 211, "Input Param2",
    "Value", 0, 0, 0 },

  { 212, "Input Param3",
    "Value", 0, 0, 0 },

  { 213, "InputParam3",
    "Value", 0, 0, 0 },

  { 214, "RESET",
    "Value", 0, 0, 0 },

  { 215, "E Gain",
    "Gain", 0, 0, 0 },

  { 216, "S Gain",
    "Gain", 0, 0, 0 },

  { 217, "S Gain3",
    "Gain", 0, 0, 0 },

  { 218, "S Gain4",
    "Gain", 0, 0, 0 },

  { 219, "Rate Transition1",
    "X0", 0, 0, 0 },

  { 220, "Rate Transition2",
    "X0", 0, 0, 0 },

  { 221, "Saturation",
    "UpperLimit", 0, 0, 0 },

  { 222, "Saturation",
    "LowerLimit", 0, 0, 0 },

  { 223, "Saturation1",
    "UpperLimit", 0, 0, 0 },

  { 224, "Saturation1",
    "LowerLimit", 0, 0, 0 },

  { 225, "Saturation2",
    "UpperLimit", 0, 0, 0 },

  { 226, "Saturation2",
    "LowerLimit", 0, 0, 0 },

  { 227, "PCI-6031E DA",
    "P1", 0, 6, 0 },

  { 228, "PCI-6031E DA",
    "P2", 0, 6, 0 },

  { 229, "PCI-6031E DA",
    "P3", 0, 6, 0 },

  { 230, "PCI-6031E DA",
    "P4", 0, 6, 0 },

  { 231, "PCI-6031E DA",
    "P5", 0, 0, 0 },

  { 232, "PCI-6031E DA",
    "P6", 0, 0, 0 },

  { 233, "PCI-6031E DA",
    "P7", 0, 0, 0 },

  { 234, "Send",
    "P1", 0, 7, 0 },

  { 235, "Send",
    "P2", 0, 0, 0 },

  { 236, "Send",
    "P3", 0, 0, 0 },

  { 237, "Send",
    "P4", 0, 0, 0 },

  { 238, "Send",
    "P5", 0, 0, 0 },

  { 239, " Calculate Additional Forces from UDP input/Gain",
    "Gain", 0, 0, 0 },

  { 240, " Calculate Additional Forces from UDP input/Gain1",
    "Gain", 0, 0, 0 },

  { 241, " Calculate Additional Forces from UDP input/Rate Transition3",
    "X0", 1, 0, 0 },

  { 242, " Calculate Additional Forces from UDP input/Saturation",
    "UpperLimit", 0, 0, 0 },

  { 243, " Calculate Additional Forces from UDP input/Saturation",
    "LowerLimit", 0, 0, 0 },

  { 244, " Calculate Additional Forces from UDP input/Receive",
    "P1", 0, 8, 0 },

  { 245, " Calculate Additional Forces from UDP input/Receive",
    "P2", 0, 0, 0 },

  { 246, " Calculate Additional Forces from UDP input/Receive",
    "P3", 0, 0, 0 },

  { 247, " Calculate Additional Forces from UDP input/Receive",
    "P4", 0, 0, 0 },

  { 248, " Calculate Additional Forces from UDP input/Receive",
    "P5", 0, 0, 0 },

  { 249, " Pillow Subsystem]/Bwall",
    "Value", 0, 0, 0 },

  { 250, " Pillow Subsystem]/Kwall",
    "Value", 0, 0, 0 },

  { 251, " Pillow Subsystem]/One",
    "Value", 0, 0, 0 },

  { 252, " Pillow Subsystem]/Rect Field",
    "Value", 0, 0, 0 },

  { 253, " Pillow Subsystem]/r",
    "Value", 0, 0, 0 },

  { 254, " Pillow Subsystem]/xwm",
    "Value", 0, 0, 0 },

  { 255, " Pillow Subsystem]/xwp",
    "Value", 0, 0, 0 },

  { 256, " Pillow Subsystem]/ywm",
    "Value", 0, 0, 0 },

  { 257, " Pillow Subsystem]/ywp",
    "Value", 0, 0, 0 },

  { 258, " Pillow Subsystem]/Gain1",
    "Gain", 0, 0, 0 },

  { 259, " Pillow Subsystem]/Gain2",
    "Gain", 0, 0, 0 },

  { 260, " Pillow Subsystem]/Gain3",
    "Gain", 0, 0, 0 },

  { 261, " Pillow Subsystem]/Saturation1",
    "UpperLimit", 0, 0, 0 },

  { 262, " Pillow Subsystem]/Saturation1",
    "LowerLimit", 0, 0, 0 },

  { 263, "Filtered  Velocity Calculations/Transfer Fcn1",
    "A", 0, 9, 0 },

  { 264, "Filtered  Velocity Calculations/Transfer Fcn1",
    "C", 0, 10, 0 },

  { 265, "Filtered  Velocity Calculations/Transfer Fcn2",
    "A", 0, 9, 0 },

  { 266, "Filtered  Velocity Calculations/Transfer Fcn2",
    "C", 0, 10, 0 },

  { 267, "Filtered  Velocity Calculations/Transfer Fcn8",
    "A", 0, 9, 0 },

  { 268, "Filtered  Velocity Calculations/Transfer Fcn8",
    "C", 0, 10, 0 },

  { 269, "Filtered  Velocity Calculations/Transfer Fcn9",
    "A", 0, 9, 0 },

  { 270, "Filtered  Velocity Calculations/Transfer Fcn9",
    "C", 0, 10, 0 },

  { 271,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/A",
    "Value", 0, 0, 0 },

  { 272,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/B",
    "Value", 0, 0, 0 },

  { 273,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/C ",
    "Value", 0, 0, 0 },

  { 274,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/C 1",
    "Value", 0, 0, 0 },

  { 275,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/C 2",
    "Value", 0, 0, 0 },

  { 276,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/Gain",
    "Gain", 0, 0, 0 },

  { 277, "Subsystem/Xy",
    "Gain", 0, 0, 0 },

  { 278, "Subsystem/Xy2",
    "Gain", 0, 0, 0 },

  { 279, "Subsystem/f",
    "Gain", 0, 0, 0 },

  { 280, "Subsystem/f1",
    "Gain", 0, 0, 0 },

  { 281, "Subsystem/Rate Transition",
    "X0", 0, 0, 0 },

  { 282, "Subsystem/Rate Transition1",
    "X0", 0, 0, 0 },

  { 283, "Subsystem/PCI-6031E AD",
    "P1", 0, 11, 0 },

  { 284, "Subsystem/PCI-6031E AD",
    "P2", 0, 11, 0 },

  { 285, "Subsystem/PCI-6031E AD",
    "P3", 0, 11, 0 },

  { 286, "Subsystem/PCI-6031E AD",
    "P4", 0, 0, 0 },

  { 287, "Subsystem/PCI-6031E AD",
    "P5", 0, 0, 0 },

  { 288, "Subsystem/PCI-6031E AD",
    "P6", 0, 0, 0 },

  { 289, "X Direction  Virtual DOF + Endpoint Force Calculation /Integrator",
    "InitialCondition", 0, 0, 0 },

  { 290, "Y Direction  Virtual DOF + Endpoint Force Calculation/Integrator",
    "InitialCondition", 0, 0, 0 },

  { 291,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain",
    "Gain", 0, 4, 0 },

  { 292,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain1",
    "Gain", 0, 4, 0 },

  { 293,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain2",
    "Gain", 0, 4, 0 },

  { 294,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make/Gain3",
    "Gain", 0, 4, 0 },

  { 295,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain",
    "Gain", 0, 4, 0 },

  { 296,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain1",
    "Gain", 0, 4, 0 },

  { 297,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain2",
    "Gain", 0, 4, 0 },

  { 298,
    "Manipulandum  Dynamic Compensation: will function poorly with unfiltered inputs/2x2Make1/Gain3",
    "Gain", 0, 4, 0 },

  { 299, "Subsystem/Elbow Angle/(ALPHA)",
    "Value", 0, 0, 0 },

  { 300, "Subsystem/Elbow Angle/Bits//Radian (TRIG_SCALE)",
    "Value", 0, 0, 0 },

  { 301, "Subsystem/Elbow Angle/Const",
    "Value", 0, 0, 0 },

  { 302, "Subsystem/Elbow Angle/Constant2",
    "Value", 0, 12, 0 },

  { 303, "Subsystem/Elbow Angle/Constant3",
    "Value", 0, 0, 0 },

  { 304, "Subsystem/Elbow Angle/Offset Elbow (OFFSETEL) ",
    "Value", 0, 0, 0 },

  { 305, "Subsystem/Elbow Angle/Pulse Generator1",
    "Amplitude", 0, 0, 0 },

  { 306, "Subsystem/Elbow Angle/Pulse Generator1",
    "Period", 0, 0, 0 },

  { 307, "Subsystem/Elbow Angle/Pulse Generator1",
    "PulseWidth", 0, 0, 0 },

  { 308, "Subsystem/Elbow Angle/Pulse Generator1",
    "PhaseDelay", 0, 0, 0 },

  { 309, "Subsystem/Elbow Angle/Bit1",
    "P1", 0, 6, 0 },

  { 310, "Subsystem/Elbow Angle/Bit1",
    "P2", 0, 0, 0 },

  { 311, "Subsystem/Elbow Angle/Bit1",
    "P3", 0, 10, 0 },

  { 312, "Subsystem/Elbow Angle/Bit1",
    "P4", 0, 0, 0 },

  { 313, "Subsystem/Elbow Angle/Bit1",
    "P5", 0, 0, 0 },

  { 314, "Subsystem/Elbow Angle/Bit1",
    "P6", 0, 0, 0 },

  { 315, "Subsystem/Elbow Angle/Bit1",
    "P7", 0, 0, 0 },

  { 316, "Subsystem/Elbow Angle/Bit1",
    "P8", 0, 0, 0 },

  { 317, "Subsystem/Elbow Angle/Bits1-8 1",
    "P1", 0, 13, 0 },

  { 318, "Subsystem/Elbow Angle/Bits1-8 1",
    "P2", 0, 0, 0 },

  { 319, "Subsystem/Elbow Angle/Bits1-8 1",
    "P3", 0, 10, 0 },

  { 320, "Subsystem/Elbow Angle/Bits1-8 1",
    "P4", 0, 0, 0 },

  { 321, "Subsystem/Elbow Angle/Bits1-8 1",
    "P5", 0, 0, 0 },

  { 322, "Subsystem/Elbow Angle/Bits1-8 1",
    "P6", 0, 0, 0 },

  { 323, "Subsystem/Elbow Angle/Bits1-8 1",
    "P7", 0, 0, 0 },

  { 324, "Subsystem/Elbow Angle/Bits1-8 1",
    "P8", 0, 0, 0 },

  { 325, "Subsystem/Elbow Angle/Bits9-1",
    "P1", 0, 13, 0 },

  { 326, "Subsystem/Elbow Angle/Bits9-1",
    "P2", 0, 0, 0 },

  { 327, "Subsystem/Elbow Angle/Bits9-1",
    "P3", 0, 10, 0 },

  { 328, "Subsystem/Elbow Angle/Bits9-1",
    "P4", 0, 0, 0 },

  { 329, "Subsystem/Elbow Angle/Bits9-1",
    "P5", 0, 0, 0 },

  { 330, "Subsystem/Elbow Angle/Bits9-1",
    "P6", 0, 0, 0 },

  { 331, "Subsystem/Elbow Angle/Bits9-1",
    "P7", 0, 0, 0 },

  { 332, "Subsystem/Elbow Angle/Bits9-1",
    "P8", 0, 0, 0 },

  { 333, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P1", 0, 6, 0 },

  { 334, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P2", 0, 0, 0 },

  { 335, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P3", 0, 6, 0 },

  { 336, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P4", 0, 6, 0 },

  { 337, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P5", 0, 10, 0 },

  { 338, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P6", 0, 0, 0 },

  { 339, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P7", 0, 0, 0 },

  { 340, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P8", 0, 0, 0 },

  { 341, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P9", 0, 0, 0 },

  { 342, "Subsystem/Elbow Angle/PCI-DIO-96 1",
    "P10", 0, 0, 0 },

  { 343, "Subsystem/Elbow Angle/Unit Delay",
    "X0", 0, 0, 0 },

  { 344, "Subsystem/Shoulder Angle/Bits//Radian (TRIG_SCALE)",
    "Value", 0, 0, 0 },

  { 345, "Subsystem/Shoulder Angle/Constant1",
    "Value", 0, 0, 0 },

  { 346, "Subsystem/Shoulder Angle/Offset Shoulder (OFFSETSH) ",
    "Value", 0, 0, 0 },

  { 347, "Subsystem/Shoulder Angle/Vector 2^17",
    "Value", 0, 12, 0 },

  { 348, "Subsystem/Shoulder Angle/Pulse Generator",
    "Amplitude", 0, 0, 0 },

  { 349, "Subsystem/Shoulder Angle/Pulse Generator",
    "Period", 0, 0, 0 },

  { 350, "Subsystem/Shoulder Angle/Pulse Generator",
    "PulseWidth", 0, 0, 0 },

  { 351, "Subsystem/Shoulder Angle/Pulse Generator",
    "PhaseDelay", 0, 0, 0 },

  { 352, "Subsystem/Shoulder Angle/Bit17",
    "P1", 0, 6, 0 },

  { 353, "Subsystem/Shoulder Angle/Bit17",
    "P2", 0, 0, 0 },

  { 354, "Subsystem/Shoulder Angle/Bit17",
    "P3", 0, 10, 0 },

  { 355, "Subsystem/Shoulder Angle/Bit17",
    "P4", 0, 0, 0 },

  { 356, "Subsystem/Shoulder Angle/Bit17",
    "P5", 0, 0, 0 },

  { 357, "Subsystem/Shoulder Angle/Bit17",
    "P6", 0, 0, 0 },

  { 358, "Subsystem/Shoulder Angle/Bit17",
    "P7", 0, 0, 0 },

  { 359, "Subsystem/Shoulder Angle/Bit17",
    "P8", 0, 0, 0 },

  { 360, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P1", 0, 13, 0 },

  { 361, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P2", 0, 0, 0 },

  { 362, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P3", 0, 10, 0 },

  { 363, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P4", 0, 0, 0 },

  { 364, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P5", 0, 0, 0 },

  { 365, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P6", 0, 0, 0 },

  { 366, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P7", 0, 0, 0 },

  { 367, "Subsystem/Shoulder Angle/Bits1-8 ",
    "P8", 0, 0, 0 },

  { 368, "Subsystem/Shoulder Angle/Bits9-16",
    "P1", 0, 13, 0 },

  { 369, "Subsystem/Shoulder Angle/Bits9-16",
    "P2", 0, 0, 0 },

  { 370, "Subsystem/Shoulder Angle/Bits9-16",
    "P3", 0, 10, 0 },

  { 371, "Subsystem/Shoulder Angle/Bits9-16",
    "P4", 0, 0, 0 },

  { 372, "Subsystem/Shoulder Angle/Bits9-16",
    "P5", 0, 0, 0 },

  { 373, "Subsystem/Shoulder Angle/Bits9-16",
    "P6", 0, 0, 0 },

  { 374, "Subsystem/Shoulder Angle/Bits9-16",
    "P7", 0, 0, 0 },

  { 375, "Subsystem/Shoulder Angle/Bits9-16",
    "P8", 0, 0, 0 },

  { 376, "Subsystem/Shoulder Angle/Int & OE",
    "P1", 0, 6, 0 },

  { 377, "Subsystem/Shoulder Angle/Int & OE",
    "P2", 0, 0, 0 },

  { 378, "Subsystem/Shoulder Angle/Int & OE",
    "P3", 0, 6, 0 },

  { 379, "Subsystem/Shoulder Angle/Int & OE",
    "P4", 0, 6, 0 },

  { 380, "Subsystem/Shoulder Angle/Int & OE",
    "P5", 0, 10, 0 },

  { 381, "Subsystem/Shoulder Angle/Int & OE",
    "P6", 0, 0, 0 },

  { 382, "Subsystem/Shoulder Angle/Int & OE",
    "P7", 0, 0, 0 },

  { 383, "Subsystem/Shoulder Angle/Int & OE",
    "P8", 0, 0, 0 },

  { 384, "Subsystem/Shoulder Angle/Int & OE",
    "P9", 0, 0, 0 },

  { 385, "Subsystem/Shoulder Angle/Int & OE",
    "P10", 0, 0, 0 },

  { 386, "Subsystem/Shoulder Angle/Unit Delay",
    "X0", 0, 0, 0 },

  { 387, "Subsystem/Elbow Angle/Parity/Constant",
    "Value", 0, 0, 0 },

  { 388, "Subsystem/Shoulder Angle/Parity/Constant",
    "Value", 0, 0, 0 },

  {
    0, NULL, NULL, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, NULL, 0, 0, 0 }
};

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &BasicModelTarget_B.Clock,           /* 0: Signal */
  &BasicModelTarget_B.FilterCutoffFreq,/* 1: Signal */
  &BasicModelTarget_B.FilterZeta,      /* 2: Signal */
  &BasicModelTarget_B.InputParam,      /* 3: Signal */
  &BasicModelTarget_B.InputParam1,     /* 4: Signal */
  &BasicModelTarget_B.InputParam2,     /* 5: Signal */
  &BasicModelTarget_B.InputParam3_a,   /* 6: Signal */
  &BasicModelTarget_B.InputParam3,     /* 7: Signal */
  &BasicModelTarget_B.RESET,           /* 8: Signal */
  &BasicModelTarget_B.EGain,           /* 9: Signal */
  &BasicModelTarget_B.SGain,           /* 10: Signal */
  &BasicModelTarget_B.SGain3,          /* 11: Signal */
  &BasicModelTarget_B.SGain4,          /* 12: Signal */
  &BasicModelTarget_B.Divide_i,        /* 13: Signal */
  &BasicModelTarget_B.Product,         /* 14: Signal */
  &BasicModelTarget_B.Product1_n,      /* 15: Signal */
  &BasicModelTarget_B.Product2_o,      /* 16: Signal */
  &BasicModelTarget_B.Product3_a,      /* 17: Signal */
  &BasicModelTarget_B.RateTransition_i[0],/* 18: Signal */
  &BasicModelTarget_B.RateTransition1, /* 19: Signal */
  &BasicModelTarget_B.RateTransition2, /* 20: Signal */
  &BasicModelTarget_B.Saturation_b,    /* 21: Signal */
  &BasicModelTarget_B.Saturation1_p,   /* 22: Signal */
  &BasicModelTarget_B.Saturation2,     /* 23: Signal */
  &BasicModelTarget_B.Pack1[0],        /* 24: Signal */
  &BasicModelTarget_B.Sum_o,           /* 25: Signal */
  &BasicModelTarget_B.Sum1_m,          /* 26: Signal */
  &BasicModelTarget_B.Sum2_a,          /* 27: Signal */
  &BasicModelTarget_B.ZeroOrderHold,   /* 28: Signal */
  &BasicModelTarget_B.ZeroOrderHold1,  /* 29: Signal */
  &BasicModelTarget_B.Fcn3_n,          /* 30: Signal */
  &BasicModelTarget_B.Gain,            /* 31: Signal */
  &BasicModelTarget_B.Gain1_o[0],      /* 32: Signal */
  &BasicModelTarget_B.Divide[0],       /* 33: Signal */
  &BasicModelTarget_B.Product1_h[0],   /* 34: Signal */
  &BasicModelTarget_B.Product2,        /* 35: Signal */
  &BasicModelTarget_B.Product3,        /* 36: Signal */
  &BasicModelTarget_B.Product4[0],     /* 37: Signal */
  &BasicModelTarget_B.Product5,        /* 38: Signal */
  &BasicModelTarget_B.Product6[0],     /* 39: Signal */
  &BasicModelTarget_B.Product7_p,      /* 40: Signal */
  &BasicModelTarget_B.Product8,        /* 41: Signal */
  &BasicModelTarget_B.Product9,        /* 42: Signal */
  &BasicModelTarget_B.RateTransition3[0],/* 43: Signal */
  &BasicModelTarget_B.Saturation,      /* 44: Signal */
  &BasicModelTarget_B.Receive_o1[0],   /* 45: Signal */
  &BasicModelTarget_B.Receive_o2,      /* 46: Signal */
  &BasicModelTarget_B.Unpack_o1,       /* 47: Signal */
  &BasicModelTarget_B.Unpack_o2,       /* 48: Signal */
  &BasicModelTarget_B.Unpack_o3,       /* 49: Signal */
  &BasicModelTarget_B.Unpack_o4,       /* 50: Signal */
  &BasicModelTarget_B.Unpack_o5,       /* 51: Signal */
  &BasicModelTarget_B.Unpack_o6,       /* 52: Signal */
  &BasicModelTarget_B.Unpack_o7,       /* 53: Signal */
  &BasicModelTarget_B.Subtract1,       /* 54: Signal */
  &BasicModelTarget_B.Sum_n,           /* 55: Signal */
  &BasicModelTarget_B.SumofForcesX,    /* 56: Signal */
  &BasicModelTarget_B.SumofForcesY,    /* 57: Signal */
  &BasicModelTarget_B.Sum1_a[0],       /* 58: Signal */
  &BasicModelTarget_B.Sum2,            /* 59: Signal */
  &BasicModelTarget_B.DotProduct_a,    /* 60: Signal */
  &BasicModelTarget_B.RectField,       /* 61: Signal */
  &BasicModelTarget_B.DotProduct_az,   /* 62: Signal */
  &BasicModelTarget_B.Fcn1,            /* 63: Signal */
  &BasicModelTarget_B.Fcn3,            /* 64: Signal */
  &BasicModelTarget_B.Fcn4,            /* 65: Signal */
  &BasicModelTarget_B.Gain1,           /* 66: Signal */
  &BasicModelTarget_B.Gain2,           /* 67: Signal */
  &BasicModelTarget_B.Gain3,           /* 68: Signal */
  &BasicModelTarget_B.Divide_m[0],     /* 69: Signal */
  &BasicModelTarget_B.Product1_k[0],   /* 70: Signal */
  &BasicModelTarget_B.Product2_l[0],   /* 71: Signal */
  &BasicModelTarget_B.Product3_k[0],   /* 72: Signal */
  &BasicModelTarget_B.Product4_i,      /* 73: Signal */
  &BasicModelTarget_B.Product5_o,      /* 74: Signal */
  &BasicModelTarget_B.Product6_b,      /* 75: Signal */
  &BasicModelTarget_B.Product7,        /* 76: Signal */
  &BasicModelTarget_B.Product8_m,      /* 77: Signal */
  &BasicModelTarget_B.Saturation1,     /* 78: Signal */
  &BasicModelTarget_B.AveX,            /* 79: Signal */
  &BasicModelTarget_B.AveX1,           /* 80: Signal */
  &BasicModelTarget_B.AveX2,           /* 81: Signal */
  &BasicModelTarget_B.AveX3[0],        /* 82: Signal */
  &BasicModelTarget_B.AveY,            /* 83: Signal */
  &BasicModelTarget_B.RadialVec[0],    /* 84: Signal */
  &BasicModelTarget_B.SumofForcesX_d,  /* 85: Signal */
  &BasicModelTarget_B.SumofForcesY_n,  /* 86: Signal */
  &BasicModelTarget_B.Fxsinth2,        /* 87: Signal */
  &BasicModelTarget_B.Fxsinth21,       /* 88: Signal */
  &BasicModelTarget_B.Fxsinth22,       /* 89: Signal */
  &BasicModelTarget_B.Fxsinth23,       /* 90: Signal */
  &BasicModelTarget_B.Sum_g,           /* 91: Signal */
  &BasicModelTarget_B.Sum1_j,          /* 92: Signal */
  &BasicModelTarget_B.Derivative1,     /* 93: Signal */
  &BasicModelTarget_B.Derivative2,     /* 94: Signal */
  &BasicModelTarget_B.Derivative3,     /* 95: Signal */
  &BasicModelTarget_B.Derivative4,     /* 96: Signal */
  &BasicModelTarget_B.Derivative5,     /* 97: Signal */
  &BasicModelTarget_B.Derivative6,     /* 98: Signal */
  &BasicModelTarget_B.Derivative7,     /* 99: Signal */
  &BasicModelTarget_B.Derivative8,     /* 100: Signal */
  &BasicModelTarget_B.TransferFcn1,    /* 101: Signal */
  &BasicModelTarget_B.TransferFcn2,    /* 102: Signal */
  &BasicModelTarget_B.TransferFcn8,    /* 103: Signal */
  &BasicModelTarget_B.TransferFcn9,    /* 104: Signal */
  &BasicModelTarget_B.squared,         /* 105: Signal */
  &BasicModelTarget_B.squared1,        /* 106: Signal */
  &BasicModelTarget_B.th1th2pi,        /* 107: Signal */
  &BasicModelTarget_B.th1th2pi1,       /* 108: Signal */
  &BasicModelTarget_B.Gain_p,          /* 109: Signal */
  &BasicModelTarget_B.MatrixMultiply[0],/* 110: Signal */
  &BasicModelTarget_B.MatrixMultiply1[0],/* 111: Signal */
  &BasicModelTarget_B.Sum_a[0],        /* 112: Signal */
  &BasicModelTarget_B.cos_th1,         /* 113: Signal */
  &BasicModelTarget_B.sin_th2,         /* 114: Signal */
  &BasicModelTarget_B.Xy,              /* 115: Signal */
  &BasicModelTarget_B.Xy2,             /* 116: Signal */
  &BasicModelTarget_B.f,               /* 117: Signal */
  &BasicModelTarget_B.f1,              /* 118: Signal */
  &BasicModelTarget_B.Fxcosth2,        /* 119: Signal */
  &BasicModelTarget_B.Fxsinth2_g,      /* 120: Signal */
  &BasicModelTarget_B.Fycosth2,        /* 121: Signal */
  &BasicModelTarget_B.Fysinth2,        /* 122: Signal */
  &BasicModelTarget_B.RateTransition,  /* 123: Signal */
  &BasicModelTarget_B.RateTransition1_e,/* 124: Signal */
  &BasicModelTarget_B.PCI6031EAD_o1,   /* 125: Signal */
  &BasicModelTarget_B.PCI6031EAD_o2,   /* 126: Signal */
  &BasicModelTarget_B.PCI6031EAD_o3,   /* 127: Signal */
  &BasicModelTarget_B.PCI6031EAD_o4,   /* 128: Signal */
  &BasicModelTarget_B.PCI6031EAD_o5,   /* 129: Signal */
  &BasicModelTarget_B.PCI6031EAD_o6,   /* 130: Signal */
  &BasicModelTarget_B.Sum_gb,          /* 131: Signal */
  &BasicModelTarget_B.Sum1_k,          /* 132: Signal */
  &BasicModelTarget_B.Function1justdirecttransmissiio,/* 133: Signal */
  &BasicModelTarget_B.Function2Canbeafunctionofstates,/* 134: Signal */
  &BasicModelTarget_B.Integrator,      /* 135: Signal */
  &BasicModelTarget_B.Function1justdirecttransmissi_j,/* 136: Signal */
  &BasicModelTarget_B.Function2Canbeafunctionofstat_n,/* 137: Signal */
  &BasicModelTarget_B.Integrator_g,    /* 138: Signal */
  &BasicModelTarget_B.Gain_o[0],       /* 139: Signal */
  &BasicModelTarget_B.Gain1_c[0],      /* 140: Signal */
  &BasicModelTarget_B.Gain2_c[0],      /* 141: Signal */
  &BasicModelTarget_B.Gain3_b[0],      /* 142: Signal */
  &BasicModelTarget_B.Add[0],          /* 143: Signal */
  &BasicModelTarget_B.Gain_i[0],       /* 144: Signal */
  &BasicModelTarget_B.Gain1_i[0],      /* 145: Signal */
  &BasicModelTarget_B.Gain2_e[0],      /* 146: Signal */
  &BasicModelTarget_B.Gain3_g[0],      /* 147: Signal */
  &BasicModelTarget_B.Add_b[0],        /* 148: Signal */
  &BasicModelTarget_B.PulseGenerator1, /* 149: Signal */
  &BasicModelTarget_B.EncoderRadians,  /* 150: Signal */
  &BasicModelTarget_B.OffsetinRadians_h,/* 151: Signal */
  &BasicModelTarget_B.Bit1_o1,         /* 152: Signal */
  &BasicModelTarget_B.Bit1_o2,         /* 153: Signal */
  &BasicModelTarget_B.Bits181_o1,      /* 154: Signal */
  &BasicModelTarget_B.Bits181_o2,      /* 155: Signal */
  &BasicModelTarget_B.Bits181_o3,      /* 156: Signal */
  &BasicModelTarget_B.Bits181_o4,      /* 157: Signal */
  &BasicModelTarget_B.Bits181_o5,      /* 158: Signal */
  &BasicModelTarget_B.Bits181_o6,      /* 159: Signal */
  &BasicModelTarget_B.Bits181_o7,      /* 160: Signal */
  &BasicModelTarget_B.Bits181_o8,      /* 161: Signal */
  &BasicModelTarget_B.Bits91_o1,       /* 162: Signal */
  &BasicModelTarget_B.Bits91_o2,       /* 163: Signal */
  &BasicModelTarget_B.Bits91_o3,       /* 164: Signal */
  &BasicModelTarget_B.Bits91_o4,       /* 165: Signal */
  &BasicModelTarget_B.Bits91_o5,       /* 166: Signal */
  &BasicModelTarget_B.Bits91_o6,       /* 167: Signal */
  &BasicModelTarget_B.Bits91_o7,       /* 168: Signal */
  &BasicModelTarget_B.Bits91_o8,       /* 169: Signal */
  &BasicModelTarget_B.Sum_j,           /* 170: Signal */
  &BasicModelTarget_B.UnitDelay_i[0],  /* 171: Signal */
  &BasicModelTarget_B.EncoderDecimal,  /* 172: Signal */
  &BasicModelTarget_B.J00,             /* 173: Signal */
  &BasicModelTarget_B.J01,             /* 174: Signal */
  &BasicModelTarget_B.J10,             /* 175: Signal */
  &BasicModelTarget_B.J11,             /* 176: Signal */
  &BasicModelTarget_B.Sum_h,           /* 177: Signal */
  &BasicModelTarget_B.Sum1,            /* 178: Signal */
  &BasicModelTarget_B.PulseGenerator,  /* 179: Signal */
  &BasicModelTarget_B.OffsetinRadians, /* 180: Signal */
  &BasicModelTarget_B.Product1,        /* 181: Signal */
  &BasicModelTarget_B.Bit17_o1,        /* 182: Signal */
  &BasicModelTarget_B.Bit17_o2,        /* 183: Signal */
  &BasicModelTarget_B.Bits18_o1,       /* 184: Signal */
  &BasicModelTarget_B.Bits18_o2,       /* 185: Signal */
  &BasicModelTarget_B.Bits18_o3,       /* 186: Signal */
  &BasicModelTarget_B.Bits18_o4,       /* 187: Signal */
  &BasicModelTarget_B.Bits18_o5,       /* 188: Signal */
  &BasicModelTarget_B.Bits18_o6,       /* 189: Signal */
  &BasicModelTarget_B.Bits18_o7,       /* 190: Signal */
  &BasicModelTarget_B.Bits18_o8,       /* 191: Signal */
  &BasicModelTarget_B.Bits916_o1,      /* 192: Signal */
  &BasicModelTarget_B.Bits916_o2,      /* 193: Signal */
  &BasicModelTarget_B.Bits916_o3,      /* 194: Signal */
  &BasicModelTarget_B.Bits916_o4,      /* 195: Signal */
  &BasicModelTarget_B.Bits916_o5,      /* 196: Signal */
  &BasicModelTarget_B.Bits916_o6,      /* 197: Signal */
  &BasicModelTarget_B.Bits916_o7,      /* 198: Signal */
  &BasicModelTarget_B.Bits916_o8,      /* 199: Signal */
  &BasicModelTarget_B.Sum,             /* 200: Signal */
  &BasicModelTarget_B.UnitDelay[0],    /* 201: Signal */
  &BasicModelTarget_B.DotProduct,      /* 202: Signal */
  &BasicModelTarget_B.MathFunction,    /* 203: Signal */
  &BasicModelTarget_B.Sum_ga,          /* 204: Signal */
  &BasicModelTarget_B.MathFunction_p,  /* 205: Signal */
  &BasicModelTarget_B.Sum_d,           /* 206: Signal */
  &BasicModelTarget_P.FilterCutoffFreq_Value,/* 207: Block Parameter */
  &BasicModelTarget_P.FilterZeta_Value,/* 208: Block Parameter */
  &BasicModelTarget_P.InputParam_Value,/* 209: Block Parameter */
  &BasicModelTarget_P.InputParam1_Value,/* 210: Block Parameter */
  &BasicModelTarget_P.InputParam2_Value,/* 211: Block Parameter */
  &BasicModelTarget_P.InputParam3_Value_g,/* 212: Block Parameter */
  &BasicModelTarget_P.InputParam3_Value,/* 213: Block Parameter */
  &BasicModelTarget_P.RESET_Value,     /* 214: Block Parameter */
  &BasicModelTarget_P.EGain_Gain,      /* 215: Block Parameter */
  &BasicModelTarget_P.SGain_Gain,      /* 216: Block Parameter */
  &BasicModelTarget_P.SGain3_Gain,     /* 217: Block Parameter */
  &BasicModelTarget_P.SGain4_Gain,     /* 218: Block Parameter */
  &BasicModelTarget_P.RateTransition1_X0,/* 219: Block Parameter */
  &BasicModelTarget_P.RateTransition2_X0,/* 220: Block Parameter */
  &BasicModelTarget_P.Saturation_UpperSat_m,/* 221: Block Parameter */
  &BasicModelTarget_P.Saturation_LowerSat_n,/* 222: Block Parameter */
  &BasicModelTarget_P.Saturation1_UpperSat_j,/* 223: Block Parameter */
  &BasicModelTarget_P.Saturation1_LowerSat_n,/* 224: Block Parameter */
  &BasicModelTarget_P.Saturation2_UpperSat,/* 225: Block Parameter */
  &BasicModelTarget_P.Saturation2_LowerSat,/* 226: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P1[0],/* 227: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P2[0],/* 228: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P3[0],/* 229: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P4[0],/* 230: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P5,   /* 231: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P6,   /* 232: Block Parameter */
  &BasicModelTarget_P.PCI6031EDA_P7,   /* 233: Block Parameter */
  &BasicModelTarget_P.Send_P1[0],      /* 234: Block Parameter */
  &BasicModelTarget_P.Send_P2,         /* 235: Block Parameter */
  &BasicModelTarget_P.Send_P3,         /* 236: Block Parameter */
  &BasicModelTarget_P.Send_P4,         /* 237: Block Parameter */
  &BasicModelTarget_P.Send_P5,         /* 238: Block Parameter */
  &BasicModelTarget_P.Gain_Gain,       /* 239: Block Parameter */
  &BasicModelTarget_P.Gain1_Gain_g,    /* 240: Block Parameter */
  &BasicModelTarget_P.RateTransition3_X0,/* 241: Block Parameter */
  &BasicModelTarget_P.Saturation_UpperSat,/* 242: Block Parameter */
  &BasicModelTarget_P.Saturation_LowerSat,/* 243: Block Parameter */
  &BasicModelTarget_P.Receive_P1[0],   /* 244: Block Parameter */
  &BasicModelTarget_P.Receive_P2,      /* 245: Block Parameter */
  &BasicModelTarget_P.Receive_P3,      /* 246: Block Parameter */
  &BasicModelTarget_P.Receive_P4,      /* 247: Block Parameter */
  &BasicModelTarget_P.Receive_P5,      /* 248: Block Parameter */
  &BasicModelTarget_P.Bwall_Value,     /* 249: Block Parameter */
  &BasicModelTarget_P.Kwall_Value,     /* 250: Block Parameter */
  &BasicModelTarget_P.One_Value,       /* 251: Block Parameter */
  &BasicModelTarget_P.RectField_Value, /* 252: Block Parameter */
  &BasicModelTarget_P.r_Value,         /* 253: Block Parameter */
  &BasicModelTarget_P.xwm_Value,       /* 254: Block Parameter */
  &BasicModelTarget_P.xwp_Value,       /* 255: Block Parameter */
  &BasicModelTarget_P.ywm_Value,       /* 256: Block Parameter */
  &BasicModelTarget_P.ywp_Value,       /* 257: Block Parameter */
  &BasicModelTarget_P.Gain1_Gain,      /* 258: Block Parameter */
  &BasicModelTarget_P.Gain2_Gain,      /* 259: Block Parameter */
  &BasicModelTarget_P.Gain3_Gain,      /* 260: Block Parameter */
  &BasicModelTarget_P.Saturation1_UpperSat,/* 261: Block Parameter */
  &BasicModelTarget_P.Saturation1_LowerSat,/* 262: Block Parameter */
  &BasicModelTarget_P.TransferFcn1_A[0],/* 263: Block Parameter */
  &BasicModelTarget_P.TransferFcn1_C[0],/* 264: Block Parameter */
  &BasicModelTarget_P.TransferFcn2_A[0],/* 265: Block Parameter */
  &BasicModelTarget_P.TransferFcn2_C[0],/* 266: Block Parameter */
  &BasicModelTarget_P.TransferFcn8_A[0],/* 267: Block Parameter */
  &BasicModelTarget_P.TransferFcn8_C[0],/* 268: Block Parameter */
  &BasicModelTarget_P.TransferFcn9_A[0],/* 269: Block Parameter */
  &BasicModelTarget_P.TransferFcn9_C[0],/* 270: Block Parameter */
  &BasicModelTarget_P.A_Value,         /* 271: Block Parameter */
  &BasicModelTarget_P.B_Value,         /* 272: Block Parameter */
  &BasicModelTarget_P.C_Value,         /* 273: Block Parameter */
  &BasicModelTarget_P.C1_Value,        /* 274: Block Parameter */
  &BasicModelTarget_P.C2_Value,        /* 275: Block Parameter */
  &BasicModelTarget_P.Gain_Gain_c,     /* 276: Block Parameter */
  &BasicModelTarget_P.Xy_Gain,         /* 277: Block Parameter */
  &BasicModelTarget_P.Xy2_Gain,        /* 278: Block Parameter */
  &BasicModelTarget_P.f_Gain,          /* 279: Block Parameter */
  &BasicModelTarget_P.f1_Gain,         /* 280: Block Parameter */
  &BasicModelTarget_P.RateTransition_X0,/* 281: Block Parameter */
  &BasicModelTarget_P.RateTransition1_X0_n,/* 282: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P1[0],/* 283: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P2[0],/* 284: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P3[0],/* 285: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P4,   /* 286: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P5,   /* 287: Block Parameter */
  &BasicModelTarget_P.PCI6031EAD_P6,   /* 288: Block Parameter */
  &BasicModelTarget_P.Integrator_IC,   /* 289: Block Parameter */
  &BasicModelTarget_P.Integrator_IC_k, /* 290: Block Parameter */
  &BasicModelTarget_P.Gain_Gain_p[0],  /* 291: Block Parameter */
  &BasicModelTarget_P.Gain1_Gain_ga[0],/* 292: Block Parameter */
  &BasicModelTarget_P.Gain2_Gain_e[0], /* 293: Block Parameter */
  &BasicModelTarget_P.Gain3_Gain_j[0], /* 294: Block Parameter */
  &BasicModelTarget_P.Gain_Gain_g[0],  /* 295: Block Parameter */
  &BasicModelTarget_P.Gain1_Gain_gy[0],/* 296: Block Parameter */
  &BasicModelTarget_P.Gain2_Gain_f[0], /* 297: Block Parameter */
  &BasicModelTarget_P.Gain3_Gain_a[0], /* 298: Block Parameter */
  &BasicModelTarget_P.ALPHA_Value,     /* 299: Block Parameter */
  &BasicModelTarget_P.BitsRadianTRIG_SCALE_Value_p,/* 300: Block Parameter */
  &BasicModelTarget_P.Const_Value,     /* 301: Block Parameter */
  &BasicModelTarget_P.Constant2_Value[0],/* 302: Block Parameter */
  &BasicModelTarget_P.Constant3_Value, /* 303: Block Parameter */
  &BasicModelTarget_P.OffsetElbowOFFSETEL_Value,/* 304: Block Parameter */
  &BasicModelTarget_P.PulseGenerator1_Amp,/* 305: Block Parameter */
  &BasicModelTarget_P.PulseGenerator1_Period,/* 306: Block Parameter */
  &BasicModelTarget_P.PulseGenerator1_Duty,/* 307: Block Parameter */
  &BasicModelTarget_P.PulseGenerator1_PhaseDelay,/* 308: Block Parameter */
  &BasicModelTarget_P.Bit1_P1[0],      /* 309: Block Parameter */
  &BasicModelTarget_P.Bit1_P2,         /* 310: Block Parameter */
  &BasicModelTarget_P.Bit1_P3[0],      /* 311: Block Parameter */
  &BasicModelTarget_P.Bit1_P4,         /* 312: Block Parameter */
  &BasicModelTarget_P.Bit1_P5,         /* 313: Block Parameter */
  &BasicModelTarget_P.Bit1_P6,         /* 314: Block Parameter */
  &BasicModelTarget_P.Bit1_P7,         /* 315: Block Parameter */
  &BasicModelTarget_P.Bit1_P8,         /* 316: Block Parameter */
  &BasicModelTarget_P.Bits181_P1[0],   /* 317: Block Parameter */
  &BasicModelTarget_P.Bits181_P2,      /* 318: Block Parameter */
  &BasicModelTarget_P.Bits181_P3[0],   /* 319: Block Parameter */
  &BasicModelTarget_P.Bits181_P4,      /* 320: Block Parameter */
  &BasicModelTarget_P.Bits181_P5,      /* 321: Block Parameter */
  &BasicModelTarget_P.Bits181_P6,      /* 322: Block Parameter */
  &BasicModelTarget_P.Bits181_P7,      /* 323: Block Parameter */
  &BasicModelTarget_P.Bits181_P8,      /* 324: Block Parameter */
  &BasicModelTarget_P.Bits91_P1[0],    /* 325: Block Parameter */
  &BasicModelTarget_P.Bits91_P2,       /* 326: Block Parameter */
  &BasicModelTarget_P.Bits91_P3[0],    /* 327: Block Parameter */
  &BasicModelTarget_P.Bits91_P4,       /* 328: Block Parameter */
  &BasicModelTarget_P.Bits91_P5,       /* 329: Block Parameter */
  &BasicModelTarget_P.Bits91_P6,       /* 330: Block Parameter */
  &BasicModelTarget_P.Bits91_P7,       /* 331: Block Parameter */
  &BasicModelTarget_P.Bits91_P8,       /* 332: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P1[0], /* 333: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P2,    /* 334: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P3[0], /* 335: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P4[0], /* 336: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P5[0], /* 337: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P6,    /* 338: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P7,    /* 339: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P8,    /* 340: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P9,    /* 341: Block Parameter */
  &BasicModelTarget_P.PCIDIO961_P10,   /* 342: Block Parameter */
  &BasicModelTarget_P.UnitDelay_X0_o,  /* 343: Block Parameter */
  &BasicModelTarget_P.BitsRadianTRIG_SCALE_Value,/* 344: Block Parameter */
  &BasicModelTarget_P.Constant1_Value, /* 345: Block Parameter */
  &BasicModelTarget_P.OffsetShoulderOFFSETSH_Value,/* 346: Block Parameter */
  &BasicModelTarget_P.Vector217_Value[0],/* 347: Block Parameter */
  &BasicModelTarget_P.PulseGenerator_Amp,/* 348: Block Parameter */
  &BasicModelTarget_P.PulseGenerator_Period,/* 349: Block Parameter */
  &BasicModelTarget_P.PulseGenerator_Duty,/* 350: Block Parameter */
  &BasicModelTarget_P.PulseGenerator_PhaseDelay,/* 351: Block Parameter */
  &BasicModelTarget_P.Bit17_P1[0],     /* 352: Block Parameter */
  &BasicModelTarget_P.Bit17_P2,        /* 353: Block Parameter */
  &BasicModelTarget_P.Bit17_P3[0],     /* 354: Block Parameter */
  &BasicModelTarget_P.Bit17_P4,        /* 355: Block Parameter */
  &BasicModelTarget_P.Bit17_P5,        /* 356: Block Parameter */
  &BasicModelTarget_P.Bit17_P6,        /* 357: Block Parameter */
  &BasicModelTarget_P.Bit17_P7,        /* 358: Block Parameter */
  &BasicModelTarget_P.Bit17_P8,        /* 359: Block Parameter */
  &BasicModelTarget_P.Bits18_P1[0],    /* 360: Block Parameter */
  &BasicModelTarget_P.Bits18_P2,       /* 361: Block Parameter */
  &BasicModelTarget_P.Bits18_P3[0],    /* 362: Block Parameter */
  &BasicModelTarget_P.Bits18_P4,       /* 363: Block Parameter */
  &BasicModelTarget_P.Bits18_P5,       /* 364: Block Parameter */
  &BasicModelTarget_P.Bits18_P6,       /* 365: Block Parameter */
  &BasicModelTarget_P.Bits18_P7,       /* 366: Block Parameter */
  &BasicModelTarget_P.Bits18_P8,       /* 367: Block Parameter */
  &BasicModelTarget_P.Bits916_P1[0],   /* 368: Block Parameter */
  &BasicModelTarget_P.Bits916_P2,      /* 369: Block Parameter */
  &BasicModelTarget_P.Bits916_P3[0],   /* 370: Block Parameter */
  &BasicModelTarget_P.Bits916_P4,      /* 371: Block Parameter */
  &BasicModelTarget_P.Bits916_P5,      /* 372: Block Parameter */
  &BasicModelTarget_P.Bits916_P6,      /* 373: Block Parameter */
  &BasicModelTarget_P.Bits916_P7,      /* 374: Block Parameter */
  &BasicModelTarget_P.Bits916_P8,      /* 375: Block Parameter */
  &BasicModelTarget_P.IntOE_P1[0],     /* 376: Block Parameter */
  &BasicModelTarget_P.IntOE_P2,        /* 377: Block Parameter */
  &BasicModelTarget_P.IntOE_P3[0],     /* 378: Block Parameter */
  &BasicModelTarget_P.IntOE_P4[0],     /* 379: Block Parameter */
  &BasicModelTarget_P.IntOE_P5[0],     /* 380: Block Parameter */
  &BasicModelTarget_P.IntOE_P6,        /* 381: Block Parameter */
  &BasicModelTarget_P.IntOE_P7,        /* 382: Block Parameter */
  &BasicModelTarget_P.IntOE_P8,        /* 383: Block Parameter */
  &BasicModelTarget_P.IntOE_P9,        /* 384: Block Parameter */
  &BasicModelTarget_P.IntOE_P10,       /* 385: Block Parameter */
  &BasicModelTarget_P.UnitDelay_X0,    /* 386: Block Parameter */
  &BasicModelTarget_P.Constant_Value,  /* 387: Block Parameter */
  &BasicModelTarget_P.Constant_Value_p /* 388: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  72,                                  /* 2 */
  1,                                   /* 3 */
  2,                                   /* 4 */
  1,                                   /* 5 */
  56,                                  /* 6 */
  1,                                   /* 7 */
  2,                                   /* 8 */
  2,                                   /* 9 */
  17,                                  /* 10 */
  1,                                   /* 11 */
  1,                                   /* 12 */
  2,                                   /* 13 */
  1,                                   /* 14 */
  11,                                  /* 15 */
  1,                                   /* 16 */
  7,                                   /* 17 */
  3,                                   /* 18 */
  1,                                   /* 19 */
  1,                                   /* 20 */
  3,                                   /* 21 */
  1,                                   /* 22 */
  6,                                   /* 23 */
  1,                                   /* 24 */
  17,                                  /* 25 */
  1,                                   /* 26 */
  8                                    /* 27 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.001, 0.004, 0.01, 0.002
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    3, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[0],
    4, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[0],
    2, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 207 },

  { rtBlockParameters, 182,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void BasicModelTarget_InitializeDataMapInfo(rtModel_BasicModelTarget
  *BasicModelTarget_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(BasicModelTarget_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(BasicModelTarget_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(BasicModelTarget_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(BasicModelTarget_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(BasicModelTarget_rtM->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(BasicModelTarget_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(BasicModelTarget_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(BasicModelTarget_rtM->DataMapInfo.mmi, 0);
}

/* EOF: BasicModelTarget_capi.c */
