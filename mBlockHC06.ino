// HC-06 communication on Port 5 (Serial2)

void setup() {
  // Initialize Serial2 for HC-06 communication (Port 5)
  Serial2.begin(9600);  // Default baud rate for HC-06
  
  // Initialize the USB Serial Monitor
  Serial.begin(9600);
  while (!Serial) {
    // Wait for the serial connection to establish
  }
  
  Serial.println("mBot Ranger HC-06 Communication Ready on Port 5!");
}

void loop() {
  // Check if there's data from the Bluetooth module (HC-06)
  if (Serial2.available()) {
    String btMessage = Serial2.readStringUntil('\n'); // Read message from HC-06
    Serial.print("Received via Bluetooth: ");
    Serial.println(btMessage);

    // Echo the received message back to the HC-06
    Serial2.println("Echo: " + btMessage);
  }

  // Check if there's data from the Serial Monitor
  if (Serial.available()) {
    String usbMessage = Serial.readStringUntil('\n'); // Read message from Serial Monitor
    Serial2.println(usbMessage); // Send the message to the HC-06
    Serial.print("Sent via Bluetooth: ");
    Serial.println(usbMessage);
  }
}
