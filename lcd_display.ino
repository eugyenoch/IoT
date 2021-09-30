//Include the library code:

#include<Wire.h>
#include <hd44780.h>
#include<hd44780ioClass/hd44780_I2exp.h>

//initialize the library with the numbers of the interface pins
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6,5,4,3,2,1, HIGH);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.print("hello world!");
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,1);
lcd.print(millis()/1000);
}

//arduinolibraries.info/libraries to download libraries
