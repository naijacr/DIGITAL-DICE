/*
  DIGITAL DICE USING ARDUINO
  ---------------------------
  - Generates random number (1–6)
  - Displays dice pattern using 8 LEDs
  - Press button to roll again

  Author: Your Name
*/

int index = 0;
int counter;

// Dice LED patterns (8 LEDs)
// 1 = ON, 0 = OFF
String pattern[] = {
  "11011110", // 0 (unused)
  "00000110", // 1
  "11101100", // 2
  "10101110", // 3
  "00110110", // 4
  "10111010", // 5
  "11111010"  // 6
};

const int buttonPin = 10; // Roll button

// -------------------- CLEAR ALL LEDs --------------------
void clearLEDs() {
  for (int i = 2; i <= 9; i++) {
    analogWrite(i, 0);
  }
}

// -------------------- DISPLAY FUNCTION --------------------
void display(int num) {
  clearLEDs();
  delay(10);

  for (int i = 0; i < 8; i++) {
    if (pattern[num].substring(i, i + 1) == "1") {
      analogWrite(i + 2, 255); // Turn ON LED
    } else {
      analogWrite(i + 2, 0);   // Turn OFF LED
    }
  }
}

// -------------------- ROLL ANIMATION --------------------
void rollAnimation() {
  for (int i = 0; i < 10; i++) {
    int temp = random(1, 7);
    display(temp);
    delay(100);
  }
}

// -------------------- SETUP --------------------
void setup() {
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(buttonPin, INPUT_PULLUP);

  // Seed random generator
  randomSeed(analogRead(A0));

  // Initial display
  display(random(1, 7));
}

// -------------------- LOOP --------------------
void loop() {

  // Button pressed (LOW because of INPUT_PULLUP)
  if (digitalRead(buttonPin) == LOW) {
    rollAnimation();

    int diceValue = random(1, 7);
    display(diceValue);

    delay(300); // debounce delay
  }
}
