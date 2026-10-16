void setup() {
  // Define pin as output
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  digitalWrite(greenLED, HIGH); // Turn LED on
  delay(1000);                  // Wait 1 second (1000 milliseconds)
  digitalWrite(greenLED, LOW);  // Turn LED off
  delay(1000);                  // Wait 1 second
}
