const int SensorPin = 2;
const int LEDPin = 12;
 
void setup() {
    pinMode(SensorPin , INPUT);
    digitalWrite(SensorPin , HIGH);
    pinMode(LEDPin, OUTPUT);
}
 
void loop() {
    if (digitalRead(SensorPin)) {
        digitalWrite(LEDPin, HIGH);
    }  else {
        digitalWrite(LEDPin, LOW);
    }
}
