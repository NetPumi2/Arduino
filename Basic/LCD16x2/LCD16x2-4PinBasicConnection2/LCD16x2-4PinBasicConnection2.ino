#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
// set the LCD address to 0x27 for a 16 chars 2 line display
LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  

int number = 0;

void setup() {
  lcd.begin(16,2); 
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  
  lcd.backlight(); 
}


void loop() {
  lcd.setCursor(0,0);
  lcd.print("Saly is the Best");
  lcd.setCursor(0,1);
  lcd.print(number);
  delay(1000);
  lcd.clear();
  number++;
}

