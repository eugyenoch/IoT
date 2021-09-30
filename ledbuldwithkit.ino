int ledBulb = 13;
int switches = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledBulb,OUTPUT);
  pinMode(switches,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchRead = digitalRead(switches);
  Serial.print(switchRead);
  if(switchRead ==0){
  digitalWrite(ledBulb,LOW);
  }
  else{
      digitalWrite(ledBulb,HIGH);
  }
}
