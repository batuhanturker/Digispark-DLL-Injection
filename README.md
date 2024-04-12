# Digispark-DLL-Injection

This project demonstrates a proof-of-concept implementation of establishing a reverse shell on a host computer using an Attiny Digispark development board. By leveraging the Digispark's USB capabilities, this project allows the execution of a Dynamic Link Library (DLL) payload on the host computer, thereby establishing a reverse shell connection.

## Features
- Utilizes Digispark's USB capabilities to mimic a Human Interface Device (HID).
- Executes a DLL payload on the host computer silently.
- Establishes a reverse shell connection from the host to a predefined server.

## Usage
1. Flash the Digispark with the provided Arduino sketch.
2. Connect the Digispark to the target host computer.
3. The Digispark emulates a HID device and executes the DLL payload.
4. The payload establishes a reverse shell connection to the specified server.

## Disclaimer
This project is intended for educational and research purposes only. Unauthorized use of this software is prohibited. The developers are not responsible for any misuse or damage caused by this software.
