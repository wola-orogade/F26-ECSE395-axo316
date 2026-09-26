#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// Define the PIR sensor and color channels pin number
const int pirPin = A0;
const int redLed = 14;
const int greenLed = 27; 
const int blueLed = 15;

// Initialize the Liquid Crystal Display with the I2C address 0x27, 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// Declare and initialize the RGB LED state
int state = 0;

void setup() {
  // Begin the serial communication with the defined baud rate of 115200
  Serial.begin(115200);

  // Set the PIR pin as an input and the LED pins as outputs
  pinMode(pirPin, INPUT); 
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
  lcd.init();       // initialize the LCD
  lcd.clear();      // clear the LCD display
  lcd.backlight();  // Make sure backlight is on
}

// Set the intensity of the RGB LED color channels
void setColor(int R, int G, int B) {
  analogWrite(redLed, R);  
  analogWrite(greenLed, G);
  analogWrite(blueLed, B); 
}

void loop() {
  state = digitalRead(pirPin);  // Read the state of the PIR sensor
  if (state == HIGH) {           
    setColor(255, 255, 255); // Turn RGB LED color to white
    Serial.println("Pekaboo!");  // Displaying the text "Pekaboo!" to the Serial Monitor output
    lcd.setCursor(2, 1);  //Move cursor to character 2 on line 1
    lcd.print("   <3   ");
    lcd.setCursor(2, 0);  //Set cursor to character 2 on line 0
    lcd.print("I am Home :)!");
    delay(1500); // Pause the program for 5 seconds after the RGB LED color turns to white
} else {
    Serial.println("Monitoring..."); // Displaying the text "Monitoring..." to the Serial Monitor output
    lcd.setCursor(2, 0);  //Move cursor to character 2 on line 1
    lcd.print("~~~ Coool ..."); // Displaying the text "~~~ Coool ..." to the Serial Monitor output
    lcd.setCursor(2, 1);  //Move cursor to character 2 on line 1
    lcd.print("........"); // Displaying the text "........" to the Serial Monitor output
    setColor(255, 0, 0);  // Turn RGB LED color to red
    delay(300); // Pause the program for 5 seconds after the RGB LED color turns to red
    setColor(0, 255, 0);  // Turn RGB LED color to green
    delay(300); // Pause the program for 5 seconds after the RGB LED color turns to green
    setColor(0, 0, 255); // Turn Set RGB LED color to blue
    delay(300); // Pause the program for 5 seconds after the RGB LED color turns to blue
    setColor(0, 0, 0); // Turn off the RGB LED Module
}

}