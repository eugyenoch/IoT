int potentiometer=1;
int ledBulb=9;
int potValue;

int getLed(){
  
  }
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometer,INPUT);
  pinMode(ledBulb,OUTPUT);
\

}

void loop() {
  // put your main code here, to run repeatedly:
potValue= analogRead(potentiometer);
Serial.print("This is the pot value");
Serial.println(potValue);
int ledLight = map(potValue,0,1024,0,255);
analogWrite(ledLight, ledBulb)
}
