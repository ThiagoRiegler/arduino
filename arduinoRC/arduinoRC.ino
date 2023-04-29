const int chA=A0;
const int chB=A1;
const int chC=A2;
const int chD=A3;

int ch1;
int ch2;
int ch3;
int ch4;

void setup() {
  
  Serial.begin(9600);

  pinMode(chA, INPUT);
  pinMode(chB, INPUT);
  pinMode(chC, INPUT);
  pinMode(chD, INPUT);

}

void loop() {
  
  ch1 = pulseIn(chA, HIGH);
  ch2 = pulseIn(chB, HIGH);
  ch3 = pulseIn(chC, HIGH);
  ch4 = pulseIn(chD, HIGH);
  
  if(ch2 > 1500){
    Serial.print("adelante: ");Serial.print(map(ch2, 1500, 1990, 60, 255));Serial.print(" (");Serial.print(ch2);Serial.println(")");
  }else if(ch2 < 1450){
    Serial.print("atras: ");Serial.print(map(ch2, 990, 1450, 255, 60));Serial.print(" (");Serial.print(ch2);Serial.println(")");
  }else if(ch4 > 1500){
    Serial.print("derecha: ");Serial.print(map(ch4, 1500, 1990, 60, 255));Serial.print(" (");Serial.print(ch4);Serial.println(")");
  }else if(ch4 < 1450){
    Serial.print("izquierda: ");Serial.print(map(ch4, 990, 1450, 255, 60));Serial.print(" (");Serial.print(ch4);Serial.println(")");
  }

}
