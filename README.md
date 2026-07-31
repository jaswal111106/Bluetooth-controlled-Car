Bluetooth Controlled Car
__________________________

An Arduino-based wireless robotic vehicle controlled remotely via smartphone over Bluetooth, capable of real-time directional movement using standard serial commands.

Overview
___________

The Bluetooth Controlled Car is a wireless robotic platform built around an Arduino Uno and an HC-05 Bluetooth module. Commands issued from a smartphone application are transmitted over Bluetooth, received by the Arduino, and translated into motor control signals through an L298N motor driver, allowing the vehicle to move forward, backward, left, right, or stop in real time.
This project integrates wireless communication, serial data handling, and DC motor control into a single embedded system, and serves as a practical introduction to robotics, Arduino programming, and Bluetooth-based automation.

Objectives
____________

Develop a wireless robotic vehicle using Arduino. Enable real-time remote control through Bluetooth communication. Understand serial data exchange between a smartphone and a microcontroller. Learn DC motor interfacing using a motor driver module. Demonstrate a practical, low-cost application of embedded systems in robotics.
Hardware Components
The system is built around an Arduino Uno, which handles command reception and motor control logic. An HC-05 Bluetooth module provides wireless serial communication with the smartphone. A single L298N motor driver module powers and controls four DC geared motors, arranged as two pairs on either side of the chassis and wired in parallel per side so each pair receives the same control signal. A battery pack supplies power to the system, with a power switch for control, and jumper wires complete the connections.

Software
___________

The firmware is developed in the Arduino IDE using Arduino C/C++. On the mobile side, a standard Bluetooth controller application is used to send directional commands as single-character serial data over the Bluetooth link.

Working Principle
___________________

The HC-05 Bluetooth module establishes a wireless serial link between the smartphone and the Arduino, functioning as a transparent UART bridge. When a directional button is pressed in the mobile application, a corresponding character command is transmitted over this link.
The Arduino continuously monitors its serial receive buffer for incoming data. Once a command is received, it is parsed and mapped to a specific movement instruction. Based on this instruction, the Arduino sets the appropriate digital output pins connected to the L298N motor driver, which in turn controls the direction and rotation of the four DC motors.
Since the L298N driver provides two independent output channels, the four motors are wired as two left-side motors and two right-side motors, with each side sharing a single channel and moving as one unit. Forward and backward motion is achieved by driving both sides in the same direction, while turning is achieved through differential steering, where the left and right sides are driven at different speeds or in opposite directions relative to each other. A stop command halts all four motors immediately by disabling the driver outputs.
Because the Bluetooth link operates as a continuous serial stream, the system responds to new commands with minimal delay, giving smooth and responsive control within Bluetooth range.

Applications
______________
This project is suited for educational robotics, wireless automation demonstrations, robotics competitions, and general embedded systems learning. It also serves as a base platform for prototyping more advanced autonomous or IoT-connected robotic vehicles.


Author
______
Deeksha Jaswal
B.Tech, Electronics and Communication Engineering- (JNGEC)
Focused on embedded systems, robotics, IoT, and AI-driven hardware.
