// c++
const byte max_steps = 20;

byte pattern[max_steps];
byte patternLen = 0;

void setup() {
  // leds
  pinMode(3, OUTPUT); // red
  pinMode(4, OUTPUT); // yellow
  pinMode(5, OUTPUT); // blue
  pinMode(6, OUTPUT); // green

  // push-buttons
  pinMode(9, INPUT_PULLUP); // red
  pinMode(10, INPUT_PULLUP); // yellow
  pinMode(11, INPUT_PULLUP); // blue
  pinMode(12, INPUT_PULLUP); // green
}

void loop() {}
