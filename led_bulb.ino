

int blue=13;
int red=9;
int green=10;
int blue2=11;
int buzzer=2;
//int SWLEFT=4;
void setup() {
  // put your setup code here, to run once:
pinMode(blue, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue2, OUTPUT);
pinMode(buzzer, OUTPUT);
//pinMode(SWLEFT,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(blue, HIGH);
delay(200);
digitalWrite(blue, LOW);
delay(200);
digitalWrite(red, HIGH);
delay(200);
digitalWrite(red, LOW);
delay(200);
digitalWrite(green, HIGH);
delay(200);
digitalWrite(green, LOW);
digitalWrite(blue2, HIGH);
delay(200);
digitalWrite(blue2, LOW);
digitalWrite(buzzer, HIGH);
delay(200);
digitalWrite(buzzer, LOW);
delay(200);
}
