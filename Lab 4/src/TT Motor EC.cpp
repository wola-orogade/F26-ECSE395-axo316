/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
// axo316, Define the Motor Driver pins
const int MOTOR_A_1B = A0; // Replace 0 with your pin number
const int MOTOR_A_1A = A1; // Replace 0 with your pin number


void setup() {
  // axo316, Begin the serial communication with the defined baud rates
  Serial.begin(115200);

  // axo316, Set the Motor_A_1B and Motor_A_1A pins as outputs
  pinMode(MOTOR_A_1B, OUTPUT);
  pinMode(MOTOR_A_1A, OUTPUT);  

}

void loop() {
  // axo316, Continusously Increase the TT Motor Rotation Speed
  for (int value = 153; value < 256; value++) {
    Serial.println(value);
    analogWrite(MOTOR_A_1B, 0);
    analogWrite(MOTOR_A_1A, value);
    delay(300);
  }

  // axo316, Continusously Decrease the TT Motor Rotation Speed
  for (int value = 256; value > 153; value--) {
    Serial.println(value);
    analogWrite(MOTOR_A_1B, 0);
    analogWrite(MOTOR_A_1A, value);
    delay(300);
  }
}*/

