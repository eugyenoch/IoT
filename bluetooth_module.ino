#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd (0x20, I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
int fan = 8;
int indicatorLight =13;
int buzzer = 2;
char Receiver = 0;
void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  
}
void loop(){
      if(Serial.available()>0){
       Receiver = Serial.read();
        Serial.println("Connection starting");
        if (Receiver == '1'){
            Serial.println("Connection Established");
            lcd.setCursor(0,4);
            lcd.scrollDisplayLeft();
            lcd.print("Connection Established");
            digitalWrite(fan, HIGH);   
            digitalWrite(indicatorLight,HIGH);
            digitalWrite(buzzer,HIGH); 
            delay(50);
              digitalWrite(buzzer,LOW); 
              delay(50);
            
                 
        }
        else if(Receiver == '0') {
            Serial.println("Connection disengaged");
             lcd.setCursor(0,4);
             lcd.scrollDisplayRight();
            lcd.print("Connection disengaged");
            delay(250);
            digitalWrite (fan, LOW);
            digitalWrite(indicatorLight, LOW  );
            //digitalWrite(buzzer,LOW);
                      
        }
      }
}
