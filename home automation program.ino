char incomingChar;
int relayPin = 7;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Relay OFF initially
  Serial.begin(9600); // Bluetooth default baud rate
}

void loop() {
  if (Serial.available()) {
    incomingChar = Serial.read();

    if (incomingChar == '1') {
      digitalWrite(relayPin, HIGH); // Turn ON LED Strip
    }
    else if (incomingChar == '0') {
      digitalWrite(relayPin, LOW); // Turn OFF LED Strip
    }
  }
}
