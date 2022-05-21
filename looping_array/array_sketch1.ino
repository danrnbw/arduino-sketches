const int ledCount =10;

int ledPins[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode (ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledCount; i++) {
    barGraphDisplay(i);
  }
  for (int i = ledCount; i > 0; i--) {
    barGraphDisplay(i - 1);
  }
}

void barGraphDisplay(int ledOn) {
  for (int i = 0; i < ledCount; i++) {
    if (i == ledOn)
      digitalWrite(ledPins[i], HIGH);
    else
      digitalWrite(ledPins[i], LOW);
  }
  delay(100);
}
