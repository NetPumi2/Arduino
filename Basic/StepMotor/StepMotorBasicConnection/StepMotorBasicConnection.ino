
const int in1 =  8;
const int in2 =  9;
const int in3 = 10;
const int in4 = 11;

int speed = 1;

int angle = 360;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  for(int i=0;i<(angle*64/45);i++){
    clockwiseRotation();
  }

  delay(1000);
  
  for(int i=0;i<(angle*64/45);i++){
    oppositeRotation();
  }

  delay(1000);
}

void clockwiseRotation() {
  step1();
  step2();
  step3();
  step4();
  step5();
  step6();
  step7();
  step8();
}
void oppositeRotation() {
  step8();
  step7();
  step6();
  step5();
  step4();
  step3();
  step2();
  step1();
}

void step1(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(speed);
}
void step2(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(speed);
}
void step3(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(speed);
}
void step4(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(speed);
}
void step5(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(speed);
}
void step6(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
  delay(speed);
}
void step7(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(speed);
}
void step8(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(speed);
}
