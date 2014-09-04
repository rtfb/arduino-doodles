#include <Servo.h>

Servo servo;

void setup() {
    servo.attach(9);
    servo.writeMicroseconds(1400);
}

void loop() {
    servo.writeMicroseconds(1400);
    delay(1000);
    servo.writeMicroseconds(500);
    delay(1000);
    servo.writeMicroseconds(2300);
    delay(1000);
}
