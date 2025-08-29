#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3); // RX = D2, TX = D3

int LED = 13;
char state;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);   // USB-monitor
  BT.begin(9600);       // Bluetooth (HC-05 baudrate)
}

void loop() {
  if (BT.available()) {
    state = BT.read();
    Serial.print("Ontvangen via BT: ");
    Serial.println(state);
  }

  if (state == '1') {
    digitalWrite(LED, HIGH);
    Serial.println("LED aan");
  }
  else if (state == '0') {
    digitalWrite(LED, LOW);
    Serial.println("LED uit");
  }

  delay(50);
}
