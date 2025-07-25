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

  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  static bool startOfRound = true;
  if (startOfRound && patternLen < max_steps) {
    pattern[patternLen++] = random(1, 5);
    startOfRound = false;
  }

  Serial.print("List now: ");
  for (byte i = 0; i < patternLen; i++) {
    Serial.print(pattern[i]);
    Serial.print(' ');
  }
  Serial.println();

  for (byte value : pattern) {
    if (value == 1) {
      Serial.println("value = 1");
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(200);
    }
    if (value == 2) {
      Serial.println("value = 2");
      digitalWrite(4, HIGH);
      delay(500);
      digitalWrite(4, LOW);
      delay(200);
    }
    if (value == 3) {
      Serial.println("value = 3");
      digitalWrite(5, HIGH);
      delay(500);
      digitalWrite(5, LOW);
      delay(200);
    }
    if (value == 4) {
      Serial.println("value = 4");
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(200);
    }
  }

  bool pressed = false;
  byte presses = 0;
  byte lastPressed = 0;

  while (presses < patternLen) {

    byte anyPressed = 0;

    // red
    if (digitalRead(9) == LOW) {
      digitalWrite(3, HIGH);
      anyPressed = 1;
    } else {
      digitalWrite(3, LOW);
    }

    // yellow
    if (digitalRead(10) == LOW) {
      digitalWrite(4, HIGH);
      anyPressed = 2;
    } else {
      digitalWrite(4, LOW);
    }

    // blue
    if (digitalRead(11) == LOW) {
      digitalWrite(5, HIGH);
      anyPressed = 3;
    } else {
      digitalWrite(5, LOW);
    }

    // green
    if (digitalRead(12) == LOW) {
      digitalWrite(6, HIGH);
      anyPressed = 4;
    } else {
      digitalWrite(6, LOW);
    }

    if (anyPressed && !pressed) {
      pressed = true;
      lastPressed = anyPressed;
    }

    if (!anyPressed && pressed) {
      pressed = false;
      if (lastPressed == pattern[presses]) {
        presses++;
      } else {
        Serial.println("Wrong button, game over!");
        delay(500);

        // End game
        while (true);
      }
    }
  }
  startOfRound = true;
  pressed = false;
  delay(100);
}
