// Define the connected pin for green LED
int greenLED = 9; 

void setup() {
  // Define pin as a power output
  pinMode(greenLED, OUTPUT); 
}

void loop() {
  digitalWrite(greenLED, HIGH); // Turn LED on
  delay(1000);                  // Wait 1 second (1000 milliseconds)
  digitalWrite(greenLED, LOW);  // Turn LED off
  delay(1000);                  // Wait 1 second
}
