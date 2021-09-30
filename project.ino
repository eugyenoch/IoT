//Initialize Variables

int led=13;
int blue=11;
int leftbtn=4;
int upbtn=6;
int buzzer=2;
int downbtn=5;
int rightbtn=7;
int green=10;
int red=9;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(leftbtn,INPUT);
pinMode(upbtn,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(downbtn,INPUT);
pinMode(rightbtn,INPUT);
pinMode(green,OUTPUT);
pinMode(red,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead (leftbtn)==HIGH){
digitalWrite(led,HIGH);
delay(200);
digitalWrite(blue,HIGH);
delay(200);
Serial.println("The led and blue came on");
}

else if (digitalRead(upbtn)==HIGH){
digitalWrite(buzzer,HIGH);
delay(200);
Serial.println("The buzzer came on");
}

else if (digitalRead(rightbtn)==HIGH){
digitalWrite(green,HIGH);
delay(200);
Serial.println("The green came on");
}

else if (digitalRead(downbtn)==HIGH){
digitalWrite(red,HIGH);
delay(200);
Serial.println("The red came on");
}

else{
 digitalWrite(led,LOW);
digitalWrite(blue,LOW);
digitalWrite(buzzer,LOW); 
digitalWrite(green,LOW);
digitalWrite(red,LOW);
digitalWrite(buzzer,LOW);
//Serial.println("Done");
}
}
