#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin = 12;
const int echoPin = 8;    
float duration;           
int distance;          

void setup() {           
  pinMode(trigPin, OUTPUT);         
  pinMode(echoPin, INPUT);         
  lcd.init();                  
  lcd.backlight();             

  lcd.clear();                 
  lcd.setCursor(0, 0);         
  lcd.print(""); 

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}
 
void loop() {
  digitalWrite(trigPin, LOW);      
  delayMicroseconds(2);         
  digitalWrite(trigPin, HIGH);     
  delayMicroseconds(10);           
  digitalWrite(trigPin, LOW);  
       
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;   
   
  lcd.clear();                  
  lcd.setCursor(0, 0);          
  lcd.print(distance);  
  lcd.print(" cm");

  if (distance > 20){
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  }
  else if (distance > 15){
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  }
  else if (distance < 15){
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  }
  
  delay(100);
  }
