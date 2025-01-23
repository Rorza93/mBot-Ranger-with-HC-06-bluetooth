# mBot Ranger HC-06 Communication on Port 5

This project demonstrates how to use an HC-06 Bluetooth module connected to Port 5 of the mBot Ranger's MegaPi board for serial communication. The code establishes a two-way communication channel between the HC-06 module and a USB-connected Serial Monitor, allowing messages to be sent and received.

## Features

- Communicate with the HC-06 Bluetooth module using Serial2 on the MegaPi board.
- Send messages from a USB Serial Monitor to a paired Bluetooth device.
- Echo received messages from the Bluetooth device back to the sender.

## Requirements

### Hardware:

- mBot Ranger with a MegaPi board
- HC-06 Bluetooth module
- Android device or PC with Bluetooth capabilities
- USB cable for programming and Serial Monitor communication

### Software:

- Arduino IDE
- Terminal app for Bluetooth (e.g., Serial Bluetooth Terminal on Android)

## Wiring

Ensure the HC-06 module is connected to Port 5:

Port 5 maps to Arduino pins:

- Pin 16 (RX2) for receiving data
- Pin 17 (TX2) for transmitting data

## Usage Instructions

### Step 1: Upload the Code

1. Open the file in Arduino IDE.
2. Select the correct board and port in the Arduino IDE.
3. Upload the code to the mBot Ranger.

### Step 2: Pair the HC-06

- Power on the mBot Ranger.
- Pair the HC-06 module with your Android device or PC via Bluetooth. The default PIN is usually 1234 or 0000.

### Step 3: Test Communication

- Open the Serial Monitor in the Arduino IDE (set the baud rate to 9600).
- Use a terminal app on your Android device or PC to connect to the HC-06 module.
- Send a message from the Serial Monitor. It will be forwarded to the HC-06 and displayed in the terminal app.
- Send a message from the terminal app. It will be displayed in the Serial Monitor and echoed back to the terminal app.

## Troubleshooting

**No data received from the HC-06:**
- Verify the wiring of the HC-06 module (TX to RX2, RX to TX2).
- Ensure the baud rate is set to 9600 on both ends.

**Unable to pair the HC-06:**
- Ensure the HC-06 is powered on and in pairing mode (LED blinking rapidly).
- Check the default PIN (1234 or 0000).

## License

This project is licensed under the MIT License. Feel free to modify and use it for your own projects.
