/*#include <Arduino.h>

// pin assignment 
const int sensorPin = A1;
// axo316, Define the ESP32 builtin LED
const int ledPin = 13;

void setup() {
  Serial.begin(115200);

  pinMode(sensorPin, INPUT);
  // axo316, Set the ledPin as an output
  pinMode (ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  // Contact made with the touch sensor
  if (sensorValue == HIGH) {
    // axo316, Display the text "Touch detected" to the Serial Monitor output
    Serial.println("Touch detected!");
    // axo316, Turn the builtin LED on 
    digitalWrite(ledPin, HIGH);
  }
  // Contact broken with the touch sensor
  else {
    // axo316, Display the text "No touch detected" to the Serial Monitor output
    Serial.println("No touch detected...,");
    // axo316, Turn the builtin LED on
    digitalWrite(ledPin, LOW);
  }

  // axo316, Pause the program every half a second
  delay(500);
}*/