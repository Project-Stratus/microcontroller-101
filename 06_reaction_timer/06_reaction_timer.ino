// Bonus: Reaction timer
// The LED turns on after a random wait. Press the button as fast as you can after the LED turns on
// Your reaction time will appear in the serial monitor

const int buttonPin = 2;
const int ledPin = 5;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A1)); // A1 has nothing connected, so it reads random noise
}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(random(2000, 5000)); // wait a random 2-5 seconds

  digitalWrite(ledPin, HIGH);
  unsigned long start = millis(); // note the time the LED came on

  while (digitalRead(buttonPin) == HIGH) {
    // do nothing until the button is pressed
  }

  unsigned long reaction = millis() - start;
  Serial.print("Reaction time (ms): ");
  Serial.println(reaction);
  
  digitalWrite(ledPin, LOW);
  Serial.println("Resetting...");
  delay(5000); // pause before the next round
}