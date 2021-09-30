int potentiometer = 1;
int bedLight = 9;
//The bulb accepts a range from 0 to 255
//The potentiometer accepts a range from 0 to 1023 which is the normal bits of a computer
void setup() {
  // put your setup code here, to run once:
  pinMode(bedLight,OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int potentiometerValue = analogRead(potentiometer);
  Serial.print("Value of the Potentiometer");
  Serial.println(potentiometerValue);
  int mappedValue = map(potentiometerValue,0,1023,0,255);

  analogWrite(bedLight,mappedValue);

  //Control the light based on incoming light intensity
  if(potentiometerValue > 850){
    digitalWrite(bedLight,LOW);
  }
  
}
