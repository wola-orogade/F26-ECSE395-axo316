// This is required in PlatformIO but hidden in the standard Arduino IDE.
#include <Arduino.h>

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // Define baud rates
  //axo316, Utilized the recommended baud rates for the serial connection
  Serial.begin(115200); // Start the Serial connection 
}

void loop() {
  // Define your text output
  // axo316, Displaying the text "BLINK :)" to the Serial Monitor output
  Serial.println("BLINK :)"); // Print the words to the Serial Monitor.
  
  // Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  // axo316, Pause the program for 1 seconds after the LED turns on
  delay(1000); // Speed in milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  // axo316, Pause the program for 3 seconds after the LED turns off
  delay(3000); // Speed in milliseconds //axo316
}