/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 9 //10 o 9
  #define LEFT_MOTOR_BACKWARD  6 //5 o 6
  #define RIGHT_MOTOR_FORWARD  10 //10 o 9
  #define LEFT_MOTOR_FORWARD   5 //5 o 6
  #define RIGHT_MOTOR_ENABLE 8 //8
  #define LEFT_MOTOR_ENABLE 7 //7-´´
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
