// Pin-setup
const int knopPin = 2;   // D2 = externe interrupt
const int ledPin  = 4;   // D4 = LED

// Variabelen
volatile bool ledState = false;
volatile unsigned long lastInterruptTime = 0;  
const unsigned long debounceDelay = 50; // ms

void setup() {
  pinMode(knopPin, INPUT); // Wordt hoog bij indrukken
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // Interrupt op RISING flank (knop wordt ingedrukt)
  attachInterrupt(digitalPinToInterrupt(knopPin), knopISR, RISING);
}

void loop() {
  // LED toestand uitvoeren
  digitalWrite(ledPin, ledState);
}

// Interrupt Service Routine (ISR)
void knopISR() {
  unsigned long currentTime = millis();
  if (currentTime - lastInterruptTime > debounceDelay) {
    ledState = !ledState; // toggle LED
    lastInterruptTime = currentTime;
  }
}