/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
*/

// the setup function runs once when you press reset or power the board
//Declare Initial Variable
#define SDA A4
#define SCL A5
#define PWMA 10
#define delayTime 200
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PWMA, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
  //  pinMode(, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
}
