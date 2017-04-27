const int sensorPin = 0;
int liquidLevel;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  liquidLevel = analogRead(sensorPin);
  Serial.println(liquidLevel);
  delay(100);
}
