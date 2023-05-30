const int chA=A0;
const int chB=A1;
const int motorIzq2 = 2;
const int motorIzq1 = 3;
const int motorDer1 = 4;
const int motorDer2 = 5;
const int velIzq = 9;
const int velDer = 10;

int ch1;
int ch2;

void setup() {
  
  Serial.begin(9600);

  pinMode(chA, INPUT);
  pinMode(chB, INPUT);
  pinMode(motorIzq1, OUTPUT);
  pinMode(motorIzq2, OUTPUT);
  pinMode(motorDer1, OUTPUT);
  pinMode(motorDer2, OUTPUT);
  pinMode(velIzq, OUTPUT);
  pinMode(velDer, OUTPUT);

}

void loop() {
  
  ch1 = pulseIn(chA, HIGH);
  ch2 = pulseIn(chB, HIGH);
  
  if(ch1 > 1500){
    digitalWrite(motorIzq1, HIGH);
    analogWrite(velIzq, map(ch1, 1500, 1990, 60, 255));
    digitalWrite(motorIzq2, 0);
  }else if(ch1 < 1450){
    digitalWrite(motorIzq2, HIGH);
    analogWrite(velIzq, map(ch1, 990, 1450, 255, 60));
    digitalWrite(motorIzq1, 0);
  }else if(ch2 > 1500){
    digitalWrite(motorDer1, HIGH);
    analogWrite(velDer, map(ch2, 1500, 1990, 60, 255));
    digitalWrite(motorDer2, 0);
  }else if(ch2 < 1450){
    digitalWrite(motorDer2, HIGH);
    analogWrite(velDer, map(ch2, 990, 1450, 255, 60));
    digitalWrite(motorDer1, 0);
  }else{
      digitalWrite(motorDer1, 0);
      digitalWrite(motorDer2, 0);
      digitalWrite(motorIzq1, 0);
      digitalWrite(motorIzq2, 0);
  }

}
