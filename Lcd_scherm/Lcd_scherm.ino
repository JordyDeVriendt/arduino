// Bibliotheek voor communicatie met I2C / TWI apparaten
#include <Wire.h> 

// Bibliotheek voor het LCD scherm
#include <LiquidCrystal_I2C.h>

/* 
 * Stel hier in welke chip en foromaat LCD je hebt
 * Gebruik 0x27 als je chip PCF8574 hebt van NXP
 * Gebruik 0x3F als je chip PCF8574A hebt van Ti (Texas Instruments)
 * De laatste twee getallen geven het formaat van je LCD aan
 * bijvoorbeeld 20x4 of 16x2
 *  
 */  
LiquidCrystal_I2C lcd(0x27, 16, 2);
//LiquidCrystal_I2C lcd(0x3F, 16, 2);
 
void setup() {
  lcd.init();                   // initialiseer het LCD scherm
  lcd.backlight();              // zet de backlight aan

  lcd.clear();                  // wis het scherm
  lcd.setCursor(0, 0);          // zet de cursor op positie 1, regel 1
  lcd.print("Hello World!");  // schrijf op scherm
}
 
void loop() {}
