// Button controls the LED on/off

// Make sure your wiring matches the pin numbers below
const int buttonPin = 2;
const int ledPin = 5;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP); // INPUT_PULLUP means the pin reads 1 when idle and 0 when pressed
    Serial.begin(9600);
}

void loop() {
    int state = digitalRead(buttonPin);
    Serial.println(state); // watch this change when you press the button

    // TODO: if state is LOW (pressed), turn the LED on. Otherwise turn it off

    delay(50);
}

// If/else reference:
/*
if ( CONDITION ) {
    DO SOMETHING!
}
else {
    DO SOMETHING ELSE!
}
*/