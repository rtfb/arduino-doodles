int n = 1;

long fib(long n) {
    if (n <= 1)
        return 1;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    long f = fib(n);
    Serial.print(millis());
    Serial.print("ms - ");
    Serial.print(n);
    Serial.print(" - ");
    Serial.println(f);
    n += 1;
}
