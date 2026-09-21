# Adewola Orogade
## Lab #4 Adventures with Actuators
### This is my third assignment working with the ESP32 and the purpose of this lab is to work on connecting actuators to ESP32. I would modify the code on Visual Studio Code running on a Windows 11 device and will upload the code to the ESP32 using PlatformIO's build and upload features. In this repository, the code source files for the Turned Torque Motor actuataor (these files are TT Motor.cpp, TT Motor Rotate.cpp & TT Motor EC.cpp) and the Servo Motor actuataor (the file is Servo Motor.cpp & Servo Motor Random.cpp) can be found in the src folder. 

To successfully complete this lab,
1. I made and started to make edits on this current markdown file.
2. I opened the Lab 4 PlatformIO project and opened all the C++ source files.
3. I built the Turned Torque Motor circuit as as can be seen in the picture below:
![This is a picture of the built Turned Torque Motor circuit](../photos/Turned%20Torque%20Motor%20Circuit.jpg)
4. I compiled and uploaded the original TT Motor C++ program to the connected ESP32 before modifying some arguments in the code to observe the changes in the TT Motor's rotational movement - Changing the integer value of a motor's analogWrite argument consequently changed the speed of the motor, Swapping the integer values of the two motor's analogWrite arguments made the motor to rotate in the exact opposite direction of before the values were swapped, and editing the delay argument changed the duration of time that the motor rotated.
5. I edited the TT Motor Rotate C++ program to enable the motor to continously run clockwise, stop, and run counterclockwise, and stop. 
6. I compiled and uploaded the TT Motor Rotate program to the connected ESP32 as I troubleshooted the circuit build and program files with the output of the ESP32 and the serial output monitor.
7. I made, compiled and uploaded a TT Motor EC C++ program, a copy of the TT Motor program, to the connected ESP32 to enable the motor rotational speed to continuously increase and decrease.
8. I built the Servo Motor circuit as as can be seen in the picture below:
![This is a picture of the built Servo Motor circuit](../photos/Servo%20Motor%20%20Circuit.jpg)
9. I compiled and uploaded the original Servo Motor C++ program to the connected ESP32 before modifying some arguments in the code to observe the changes in the Servo Motor's rotational movement - Changing the integer value of a motor's analogWrite argument consequently changed the speed of the motor, Swapping the integer values of the two motor's analogWrite arguments made the motor to rotate in the exact opposite direction of before the values were swapped, and editing the delay argument changed the duration of time that the motor rotated.
10. I edited the Servo Motor Random C++ program to enable the servo to move to continuously random angles between 0°and 180°
11. I compiled and uploaded the Servo Motor Random program to the connected ESP32 as I troubleshooted the circuit build and program files with the output of the ESP32 and the serial output monitor.
12. I finalized this lab's C++ files before recording videos for the ESP32 and serial monitor outputs of some of the the TT Motor and Servo Motor builds
13. I completed the writing for the Time Reporting and Reflection for this lab before uploading the actuator_adventures, photos files, and src files to my local and remote repository and my project videos to canvas.

**Time Reporting and Reflection**

1. How long did it take you to complete this assignment?  
This assignment took me around 5 hours to fully complete.
2. What level of difficulty would you associate with this assignment?  
I would associate this assignment with a difficulty level of Medium.
3. If you associated medium/high difficulty with this assignment, what aspect did you find the most difficult?  
I would say the medium difficulty parts were in understanding the exact functionality of the Servo Motors as sometimes changing their values did not always appear to a relate to the change in the Servo's rotational movement.
4. How comfortable do you currently feel with the course content?  
I am not sure I fully understand the entire functionality and programming control of the Servo Motor.
5. Do you have any additional information or feedback you would like to share with the instructors?  
I found the instructions of this lab to be a bit challenging to follow as I was initially unsure of whether the instructions I was meant to follow were the Canvas PDF instructions or the instructions found in the Markdown files in the Lab 4 Instructions folder.
