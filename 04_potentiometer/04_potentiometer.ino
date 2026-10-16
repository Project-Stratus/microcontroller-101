// Turn the knob and watch the numbers in the serial monitor

const int potPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin); // gives a number from 0 to 1023
  Serial.println(value);

  // TODO: print "HIGH" if value is above 512, otherwise print "LOW"
  // Hint: use the same if/else pattern as the button sketch

  delay(200);
}