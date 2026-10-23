const int buttonPin = 2;
const int ledPin = 5;
const int potPin = A0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(buttonPin);

  if (state == LOW) {                          // button held down
    int brightness = analogRead(potPin) / 4;
    analogWrite(ledPin, brightness);
  } else {
    analogWrite(ledPin, 0);
  }

  delay(20);
}