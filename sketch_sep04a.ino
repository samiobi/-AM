// Simple tone test - Arduino Uno
const int tonePin = 9; // connected to LM386 input via RC or via coupling cap
void setup() {
  // nothing special
}
void loop() {
  // play 1 kHz tone for 2 seconds
  tone(tonePin, 1000);
  delay(2000);
  // silence for 1 second
  noTone(tonePin);
  delay(1000);
}
