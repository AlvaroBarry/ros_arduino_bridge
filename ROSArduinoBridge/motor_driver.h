/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 7 //8 o 7
  #define LEFT_MOTOR_BACKWARD  6 //4 o 6
  #define RIGHT_MOTOR_FORWARD  8 //8 o 7
  #define LEFT_MOTOR_FORWARD   4 //4 o 6
  #define RIGHT_MOTOR_ENABLE 9 //9
  #define LEFT_MOTOR_ENABLE 5 //5
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
