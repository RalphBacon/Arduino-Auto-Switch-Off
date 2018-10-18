#define powerPin A0

void setup() {
  Serial.begin(9600);
  pinMode(powerPin, OUTPUT);
  digitalWrite(powerPin, HIGH);
  Serial.println("Setup completed");
}

void loop() {
  static unsigned int countDown = 10;
  while (countDown > 0) {
    Serial.println(countDown);
    delay(1000);
    countDown--;
  }

  digitalWrite(powerPin, LOW);
}
