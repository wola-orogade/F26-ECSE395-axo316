/*#include <Arduino.h>

// function prototype
int voltage(float analogvalue);

// Put your potentiometer pin assignment here
const int sensorPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // This is the line for printing in the serial
    //Serial.println(voltage(analogRead(sensorPin)));

    // axo316, Read the sensorPin analog pinout signal
    int sensorValue = analogRead(sensorPin);
    // axo316, Convert the sensorValue analog signal to a signal voltage signal
    float sensorVoltage = voltage(sensorValue);
    // axo316, Display the voltage signal across the potentiometer to the Serial Monitor output
    Serial.println(sensorVoltage);
    // axo316, Pause the program every 150 ms
    delay(150); 
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    voltage = (analogvalue * 3.3) / 4095;
    return voltage;
}*/