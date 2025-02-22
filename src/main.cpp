#include <Arduino.h>

#include <LiquidCrystal_I2C.h>

int kolom = 16;
int baris = 2;

LiquidCrystal_I2C lcd(0x27, kolom, baris);

void setup() {
  // put your setup code here, to run once:

lcd.init();
lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:

int i;
lcd.setCursor(1,0);
lcd.print("Latihan Arduino Simulasi LCD I2CL");

lcd.setCursor(0,1);
lcd.print("Sekolah BQ Islamic Boarding School");

for (i = 0; i<16; i++){
  lcd.scrollDisplayLeft();
  delay(500);

}


}

