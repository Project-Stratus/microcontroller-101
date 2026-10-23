const int potPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin);
  Serial.print(value);
  Serial.print(" - ");

  if (value > 512) {
    Serial.println("HIGH");
  } else {
    Serial.println("LOW");
  }

  delay(200);
}