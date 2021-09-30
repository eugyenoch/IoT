float temp;
int tempPIN=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
temp= analogRead(tempPIN);
delay(200);
float tempconvert = temp*0.48828125;
Serial.print("TEMPERATURE is: ");
Serial.print(tempconvert);
Serial.print("*C");
Serial.println();
delay(1000);
}
