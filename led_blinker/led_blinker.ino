int greenPin = 11;
int redPin = 13;
int greenLevel = 0;
unsigned long lastGreenChange = 0;
int numBlinks = 0;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    lastGreenChange = millis();
}

void blinkLed(int led) {
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
}

void loop() {
    unsigned long now = millis();
    if (greenLevel > 255) {
        greenLevel = 0;
    }
    analogWrite(greenPin, greenLevel);
    if (now - lastGreenChange >= 1500) {
        greenLevel += 51;
        lastGreenChange = now;
        numBlinks = 0;
    }
    if (numBlinks < 2) {
        blinkLed(redPin);
        numBlinks += 1;
    }
}
