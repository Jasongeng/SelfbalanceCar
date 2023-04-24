/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
*/
/*
  Introduce Wire Repository
*/
#include <Wire.h>
const int MPU = 0x68;//MPU IIC defult address
float AccX, AccY, AccZ;
float GyroX, GyroY, GyroZ;
float accAngleX, accAngleY, accAngleZ;
float roll;
// the setup function runs once when you press reset or power the board
//Declare Initial Variable
#define SDA A4
#define SCL A5
//TB6612FNG
#define STBY 8
#define PWMA 9
#define PWMB 10
#define AIN1 11
#define AIN2 12
#define BIN1 6
#define BIN2 7
//Motor Encode
#define PinA_left 5
#define PinA_right 6
#define PinB_left 7
#define PinB_right 8
//
#define delayTime 200
/*
  Function:Test Motor run
*/

void setup()
{
  //Config TB6612 Pins
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);
  //Call for MPU Init and communicate function
  WireInit();
  //

}
//Main Loop
void loop()
{
  //  Forward();
  //  digitalWrite(PWMA,100);
  //  digitalWrite(PWMB,100);
  //  delay(delayTime);
}
void WireInit()
{
  Serial.begin(9600);
  Wire.begin();                      // Initialize comunication
  Wire.beginTransmission(MPU);       // Start communication with MPU6050 // MPU=0x68
  Wire.write(0x6B);                  // Talk to the register 6B
  Wire.write(0x00);                  // Make reset - place a 0 into the 6B register
  Wire.endTransmission(true);        //end the transmission
  delay(20);
}
void Forward()
{
  digitalWrite(AIN1, 0);
  digitalWrite(AIN2, 1);
  digitalWrite(BIN1, 1);
  digitalWrite(BIN2, 0);
}
