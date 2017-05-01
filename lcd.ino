#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() 
{
   Serial.begin(9600);
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
  lcd.print("04050521 JIANG,YU-JHE");
   lcd.setCursor(0, 1);
   lcd.print("04050060 YOU,JYUN-HSIEN");
 }
void loop() 
{
   String val;
   lcd.setCursor(0, 1);
   if(Serial.available() )
   {
        lcd.print(Serial.readString());
        delay(2000);
        lcd.clear();     
   }
}
