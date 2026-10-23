// TODO1: Upload to the board to check connection
// TODO2: Print something to the serial monitor

void setup() {
  // Define pin as output
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println()
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn LED on
  delay(1000);                  // Wait 1 second (1000 milliseconds)
  digitalWrite(LED_BUILTIN, LOW);  // Turn LED off
  delay(1000);                  // Wait 1 second
}
