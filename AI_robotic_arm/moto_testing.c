#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(5); // D4
  servo.write(0);
  delay(2000);
}

void loop() {
  // Move from 0° to 130° slowly
  for (int pos = 90; pos <= 180; pos++) {
    servo.write(pos);
    delay(15); // adjust for speed (increase delay for slower movement)
  }

  delay(1000); // pause at the end position

  // Move from 130° back to 0° slowly
  for (int pos = 180; pos >= 90; pos--) {
    servo.write(pos);
    delay(15);
  }

  delay(1000); // pause at the starting position
}
