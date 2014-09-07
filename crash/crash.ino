void crash(int n) {
    Serial.println(n);
    crash(n+1);
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    crash(0);
}
