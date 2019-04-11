void beep(int d) {
  digitalWrite(beepPin, HIGH);
  delay(d);
  digitalWrite(beepPin, LOW);
}
