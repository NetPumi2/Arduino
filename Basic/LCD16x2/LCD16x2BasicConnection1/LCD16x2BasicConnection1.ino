
#include "LiquidCrystal.h"

LiquidCrystal lcd(8,9,4,5,6,7);
int number = 0;
void setup() {
lcd.begin(16,2);
lcd.setCursor(0,1);
delay(1000);
}
void loop(){
    
  lcd.setCursor(0,0);
  //text to print
  lcd.print("Saly is the Best");
  lcd.setCursor(0,1);
  lcd.print(number);
  delay(1000);

  lcd.clear();
  number++;
}

