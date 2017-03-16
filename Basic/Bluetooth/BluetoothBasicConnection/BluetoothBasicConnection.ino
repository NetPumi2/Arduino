char blinkDiod = 0;            
void setup()
{
    Serial.begin(9600);   
    pinMode(13, OUTPUT); 
}
void loop()
{
   if(Serial.available() > 0)      
   {
      blinkDiod = Serial.read();        
      Serial.print(blinkDiod);         
      Serial.print("\n");        
      if(blinkDiod == '1')             
         digitalWrite(13, HIGH);   
      else if(blinkDiod == '0')         
         digitalWrite(13, LOW);   
   }
}
