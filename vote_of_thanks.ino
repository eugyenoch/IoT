//Include the library code:

#include<Wire.h>
#include <hd44780.h>
#include<hd44780ioClass/hd44780_I2Cexp.h>

char Received=0;
//initialize the library with the numbers of the interface pins
hd44780_I2Cexp lcd (0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    Received=Serial.read();
  }
  if(Received=='1'){
  lcd.setCursor(0,1);
  lcd.scrollDisplayLeft();
  lcd.print("Thank you so much Aptech Community For this");

}
else if (Received=='2'){
  lcd.setCursor(0,1);
  lcd.scrollDisplayRight();
  lcd.print("Thank you so much");
}
}
