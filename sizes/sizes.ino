void setup() {
    Serial.begin(9600);
    Serial.print("sizeof char = ");
    Serial.println(sizeof(char));
    Serial.print("sizeof int = ");
    Serial.println(sizeof(int));
    Serial.print("sizeof long = ");
    Serial.println(sizeof(long));
}

void loop() {
    delay(500);
}
