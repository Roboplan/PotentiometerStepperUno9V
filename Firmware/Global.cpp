#include "Global.h"

Potentiometer potentiometer = Potentiometer(POTENTIOMETER_SIGNAL_PIN);
StepperMotor motor = StepperMotor(STEPPER_MOTOR_STEP_PIN, STEPPER_MOTOR_DIR_PIN, STEPPER_MOTOR_MS1_PIN,STEPPER_MOTOR_MS2_PIN,STEPPER_MOTOR_ENABLE_PIN);

