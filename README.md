# HOME-AUTOMATION-WITH-BLUETOOTH

COMPANY: CODTECH IT SOLUTIONS

NAME: SANJAY R

INTERN ID: CT04DH8046

DOMAIN: EMBEDDED SYSTEMS

DURATION: 4 WEEKS

MENTOR: NEELA SANTHOSH

TASK DESCRIPTION:

The objective of this project is to design and implement a Bluetooth-controlled LED lighting system using an Arduino UNO, an HC-05 Bluetooth module, a 1-channel relay module, and a 12V LED strip. The system enables wireless control of the LED strip through an Android smartphone by sending commands over Bluetooth. When a user sends specific commands via a mobile app (like "1" or "0"), the Arduino interprets the input and activates or deactivates the relay, which in turn controls the power supplied to the LED strip. This setup demonstrates basic principles of embedded system interfacing, wireless communication, and actuator control using microcontrollers. It is ideal for smart home lighting automation and DIY electronics learning.

WORKING PRINCIPLE:

The project operates on the principle of wireless communication between a smartphone and the Arduino UNO using the HC-05 Bluetooth module. When the Android phone sends a specific command (like '1' to turn ON or '0' to turn OFF), the HC-05 receives the signal and passes it to the Arduino through serial communication. The Arduino reads the received command and switches the digital output pin connected to the relay module accordingly. The relay acts as an electronic switch that controls the power supply to the 12V LED strip. When the relay is activated, it completes the circuit and powers the LED strip; when deactivated, it cuts the circuit and turns off the LED strip. This setup allows users to remotely control lighting using simple Bluetooth commands, showcasing embedded system control and real-world actuator switching.
