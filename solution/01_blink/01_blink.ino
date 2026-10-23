// Make the board talk back through the Serial Monitor
// Open the Serial Monitor and set it to 9600 baud.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // start serial communication
  Serial.println("===== Program started =====");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED is on");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED is off");
  delay(1000);
}