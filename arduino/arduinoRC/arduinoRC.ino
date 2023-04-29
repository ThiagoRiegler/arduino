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
  
  Serial.print(ch1);
  Serial.print(",");
  Serial.print(ch2);
  Serial.print(",");
  Serial.print(ch3);
  Serial.print(",");
  Serial.println(ch4);

}
