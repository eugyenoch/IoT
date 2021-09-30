//include the library code:
#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
int buzzer=2;
int green=10;

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
 lcd.print("THANK U MOSROID");
 pinMode(buzzer,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//set the cursor to column 0, line 1
  //(note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0,1);
  //print the number of seconds since reset;
  lcd.scrollDisplayLeft();
  delay(200);
lcd.print("TME EDU. IS GREAT");
digitalWrite(buzzer,HIGH);
delay(300);
noTone(buzzer);
delay(3000);
digitalWrite(green,HIGH);
delay(300);
digitalWrite(buzzer,HIGH);
delay(3000);
noTone(buzzer);
delay(300);
digitalWrite(green,HIGH);
delay(300);
digitalWrite(buzzer,HIGH);
delay(3000);
noTone(buzzer);
delay(300);
digitalWrite(green,HIGH);
delay(300);
digitalWrite(buzzer,HIGH);
delay(300);
noTone(buzzer);
delay(300);
digitalWrite(green,HIGH);
delay(300);
}
