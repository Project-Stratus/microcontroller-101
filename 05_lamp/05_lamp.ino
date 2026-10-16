// A mini lamp
// The button toggles the LED on/off. The knob varies the brightness
// Right now the lamp turns on and off but is always at full brightness.

// TODO: make the knob control the brightness
// STRETCH: make the lamp light only while the button is held, instead of toggling
//          Hint: the button reads LOW while pressed (refer to 03_button)

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

  // Button: detect the moment of press and flip the lamp on/off
  if (lastState == HIGH && state == LOW) {
    ledOn = !ledOn;
    Serial.println(ledOn ? "Lamp on" : "Lamp off");
  }
  lastState = state;

  // Knob: set the brightness while the lamp is on
  if (ledOn) {
    int brightness = 255;   // TODO: read the knob here instead of using 255
                            // Hint: analogRead() gives 0-1023, analogWrite() takes 0-255
    analogWrite(ledPin, brightness);
  } else {
    analogWrite(ledPin, 0);
  }

  delay(20); // check the button every 20 ms
}