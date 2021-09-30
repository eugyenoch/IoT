//Include the library code:

#include<Wire.h>
//#include <hd44780.h>
//#include<hd44780ioClass/hd44780_I2exp.h>

//initialize the library with the numbers of the interface pins
//hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6,5,4,3,2,1, HIGH);

int red=9;
int green=10;
int lightIntensity=3;
int buzzer=2;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(lightIntensity,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(lightIntensity)<100){
  digitalWrite(red,HIGH);
  digitalWrite(buzzer,HIGH);
 // delay(200);
  Serial.println("Light intensity is below 100");
}
else{
 digitalWrite(green, HIGH);
 Serial.println("Light Intensity is above 100");
}
}
