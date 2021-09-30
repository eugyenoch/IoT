int SWLEFT=4;
int buzzer=13;

void setup() {
  // put your setup code here, to run once:
pinMode(SWLEFT, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead (SWLEFT)==HIGH){
  digitalWrite(buzzer, HIGH);
  Serial.println("The Hardware Works");
}
else{
  digitalWrite(buzzer,LOW);
}
}
