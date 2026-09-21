/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
// axo316, Define the Motor Driver pins
const int MOTOR_A_1B = A0;
const int MOTOR_A_1A = A1;

void setup() {
  // TODO: Initialize Serial communication
  // axo316, Begin the serial communication with the defined baud rates
  Serial.begin(115200);

  // TODO: Set your motor pins as OUTPUTs
  // axo316, Set the Motor_A_1B and Motor_A_1A pins as outputs
  pinMode(MOTOR_A_1B, OUTPUT);
  pinMode(MOTOR_A_1A, OUTPUT); 

  // axo316, Displaying the text "Declared and Intialized Motor Pins as Outputs" to the Serial Monitor output
  Serial.println("Declared and Intialized Motor Pins as Outputs");
}

void loop() {
  // --- SECTION 1: Clokwise (5s) ---
  // axo316, Displaying the text "Clockwise Rotation (5s)" to the Serial Monitor output
  Serial.println("Clockwise Rotation (5s)");
  
  // TODO: Write HIGH to one pin and LOW to the other
  // axo316, Rotate the TT Motor Clockwise
  digitalWrite(MOTOR_A_1B, HIGH);
  digitalWrite(MOTOR_A_1A, LOW);

  // axo316, Pause the program for 5 seconds after the TT Motor starts to Rotate
  delay(5000);

  // --- SECTION 2: Stop (2s) ---
  // axo316, Displaying the text "Stop Rotation (2s)" to the Serial Monitor output
  Serial.println("Stop Rotation (2s)");
  
  // TODO: Turn off the motor
  // axo316, Stop Rotation of the TT Motor Clockwise 
  digitalWrite(MOTOR_A_1B, LOW);
  digitalWrite(MOTOR_A_1A, LOW);

  // axo316, Pause the program for 2 seconds after the TT Motor stops the rotation
  delay(2000);

  // --- SECTION 3: Counterclockwise (5s) ---
  // axo316, Displaying the text "Counterclockwise Rotation (5s)" to the Serial Monitor output  
  Serial.println("Counterclockwise Rotation (5s)");
  
  // TODO: Write HIGH to one pin and LOW to the other
  // axo316, Rotate the TT Motor Counterclockwise
  digitalWrite(MOTOR_A_1B, LOW);
  digitalWrite(MOTOR_A_1A, HIGH);

  // axo316, Pause the program for 5 seconds after the TT Motor starts to Rotate
  delay(5000);

  // --- SECTION 4: Stop (2s) ---
  // axo316, Displaying the text "Stop Rotation (2s)" to the Serial Monitor output
  Serial.println("Stop Rotation (2s)");
  
  // TODO: Turn off the motor
  // axo316, Stop Rotation of the TT Motor Clockwise 
  digitalWrite(MOTOR_A_1B, LOW);
  digitalWrite(MOTOR_A_1A, LOW);

  delay(2000);
}*/


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.