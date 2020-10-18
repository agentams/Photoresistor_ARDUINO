#include<LiquidCrystal.h>

LiquidCrystal lcd(6,5,4,3,2,1);
#define LDR A0
 
void setup() {
  
  pinMode(LDR,INPUT);
  lcd.begin(16,2); 
  lcd.setCursor(0,0);
    lcd.print("mr. x is calling");
  delay(2000);
  
}
void loop()
{
   int val=analogRead(LDR); 
   
  
  if(val<200)
  {   
    lcd.setCursor(0,0);
    lcd.print("                 ");
    delay(1000);
    //as you pickup your call and place the phone near your ear the amount of light will reduce so the screen will turn off
  }
  else
  {
    
    lcd.setCursor(0,0);          
    lcd.print("talking to mr. x ");
    delay(500);
    //as you will move away the phone from your ear the light will increase and i will sahow the caller info
  }
  delay(1000);
}
