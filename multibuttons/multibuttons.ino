int buttonPin = 11;

int buttonRead(int pin) {
    int val = analogRead(pin);
    if (val == 1023) {
        return 1;
    } else if (val > 920 && val < 940) {
        return 2;
    } else if (val > 840 && val < 860) {
        return 3;
    } else if (val > 780 && val < 800) {
        return 4;
    } else if (val > 720 && val < 740) {
        return 5;
    } else {
        return 0;
    }
}

void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}

void loop() {
    int buttonState = buttonRead(buttonPin);
    if (buttonState > 0) {
        Serial.println(buttonState);
    }
}
