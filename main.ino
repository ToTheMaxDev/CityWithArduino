int buzzer = 2;
int leds[3] = {49,50,51};
int Siren1 = 52;
int Siren2 = 53;

void setup() {
  for (int i=0; i<4;i++) {
    pinMode(leds[i],OUTPUT);
  }
  pinMode(Siren1,OUTPUT);
  pinMode(Siren2,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  for (int i=0; i<4;i++) {
    digitalWrite(leds[i],HIGH);
  }
  delay(300);
  analogWrite(buzzer,120);
  digitalWrite(Siren1,HIGH);
  digitalWrite(Siren2,LOW);
  delay(300);
  analogWrite(buzzer,30);
  digitalWrite(Siren2,HIGH);
  digitalWrite(Siren1,LOW);
}
