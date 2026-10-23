const int buttonPin = 2;
const int ledPin = 5;
const int potPin = A0;

bool ledOn = false;
int lastState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(buttonPin);

  if (lastState == HIGH && state == LOW) {
    ledOn = !ledOn;
    Serial.println(ledOn ? "Lamp on" : "Lamp off");
  }
  lastState = state;

  if (ledOn) {
    int brightness = analogRead(potPin) / 4;   // SOLUTION: 0-1023 -> 0-255
    analogWrite(ledPin, brightness);
  } else {
    analogWrite(ledPin, 0);
  }

  delay(20);
}