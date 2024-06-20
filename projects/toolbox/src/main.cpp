// pio project init --board uno

// 
/**
 * -- THE TOOLBOX -- 
 *
 * What this project will be, I do not know.
 * But for now it will open a curtian. 
 * In my toolbox.
 *
 */

// Project Creation: pio project init --board uno
// Project Upload: pio run --target upload

#include "Arduino.h"
#include <Servo.h>

Servo myservo;

const int switchPositionOnePin = 2;
const int switchPositionTwoPin = 3;

void setup()
{
  pinMode(servoPosition, OUTPUT);
  pinMode(switchPositionOnePin, INPUT);
  pinMode(switchPositionTwoPin, INPUT);
  myservo.attach(10);
  myservo.write(90);
}

void loop()
{
  // -- CURTAIN LOGIC
  int servoPosition;
  switchPositionOne = digitalRead(switchPositionOnePin);
  switchPositionTwo = digitalRead(switchPositionTwoPin);
  
  if (switchPositionOne == HIGH && switchPositionTwo == LOW) {
    servoPosition = 60;
  } else if (switchPositionTwo == HIGH && switchPositionOne == LOW) {
    servoPosition = 120;
  } else {
    servoPosition = 90;
  }l
  
  myservo.write(servoPosition);
}


// -- BOILERPLATE CODE FROM PLATFORM.IO --

/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

// #ifndef LED_BUILTIN
// #define LED_BUILTIN 13
// #endif

  // turn the LED on (HIGH is the voltage level)
  // digitalWrite(LED_BUILTIN, HIGH);

  // // wait for a second
  // delay(1000);

  // // turn the LED off by making the voltage LOW
  // digitalWrite(LED_BUILTIN, LOW);
  // myservo.write(60);
  //
  //  // wait for a second
  // delay(100);

