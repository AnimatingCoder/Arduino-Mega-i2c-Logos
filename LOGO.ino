//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

byte YT1[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01111,
  B11111,
  B11110,
  B11110
};
byte YT2[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B11110,
  B11111,
  B11111,
  B00111
};
byte YT3[] = {
  B11110,
  B11110,
  B11111,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000
};
byte YT4[] = {
  B01111,
  B11111,
  B11111,
  B11110,
  B00000,
  B00000,
  B00000,
  B00000
};
byte TWITTER1[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11000,
  B01110,
  B11111
};
byte TWITTER2[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B11111,
  B11111,
  B11111
};
byte TWITTER3[] = {
  B01111,
  B01111,
  B00111,
  B01111,
  B00000,
  B00000,
  B00000,
  B00000
};
byte TWITTER4[] = {
  B11111,
  B11110,
  B11110,
  B11100,
  B10000,
  B00000,
  B00000,
  B00000
};
byte Git1[] = {
  B00000,
  B00000,
  B00000,
  B00011,
  B00111,
  B01011,
  B11000,
  B11000
};
byte Git2[] = {
B00000,
  B00000,
  B00000,
  B11000,
  B11100,
  B11010,
  B00011,
  B00011  
};
byte Git3[] = {
  B01000,
  B01000,
  B10100,
  B01010,
  B00100,
  B00000,
  B00000,
  B00000
};
byte Git4[] = {
  B00011,
  B00011,
  B00111,
  B01110,
  B00100,
  B00000,
  B00000,
  B00000
};


LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  //  lcd.setCursor(3,0);
  //lcd.blink();
  lcd.createChar(0, YT1);
  lcd.createChar(1, YT2);
  lcd.createChar(2, YT3);
  lcd.createChar(3, YT4);
  lcd.createChar(4, TWITTER1);
  lcd.createChar(5, TWITTER2);
  lcd.createChar(6, TWITTER3);
  lcd.createChar(7, TWITTER4);

}


void loop()
{

    lcd.createChar(0, YT1);
  lcd.createChar(1, YT2);
  lcd.createChar(2, YT3);
  lcd.createChar(3, YT4);

  //YouTube Logo
  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.setCursor(0, 1);
  lcd.write(byte(2));
  lcd.write(byte(3));



  //Text

  lcd.setCursor(3, 0);
  lcd.print("Animate Mania");
  lcd.setCursor(3, 1);

  //Animator
  lcd.print("YT - Animator");

  ////CLEAR\\\\
  delay(1000);
  delay(2000);
  lcd.clear();
  ////CLEAR\\\\

      //TWITTER LOGO
  
  lcd.setCursor(0,0);
  lcd.write(byte(4));
  lcd.write(byte(5));
  lcd.setCursor(0,1);
  lcd.write(byte(6));
  lcd.write(byte(7));

  //STATUS

  lcd.setCursor(3,0);
  lcd.print("@Virtually...");
  lcd.setCursor(3,1);
  lcd.print("Twitter");
  delay(2000);
  lcd.clear();
  
  

        //TWITTER LOGO
  
  lcd.setCursor(0,0);
  lcd.write(byte(4));
  lcd.write(byte(5));
  lcd.setCursor(0,1);
  lcd.write(byte(6));
  lcd.write(byte(7));


  lcd.setCursor(3,0);
  lcd.print("...Gamin1");    
  lcd.setCursor(3,1);
  lcd.print("Twitter");
  
  delay(2000);
  lcd.clear();


  //GitHub Logo

    lcd.createChar(8, Git1);
  lcd.createChar(9, Git2);
  lcd.createChar(10, Git3);
  lcd.createChar(11, Git4);

  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.setCursor(0, 1);
  lcd.write(byte(2));
  lcd.write(byte(3));

  lcd.setCursor(3,0);
  lcd.print("Animating...");
  lcd.setCursor(3,1);
  lcd.print("GitHub");
  delay(2000);
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.setCursor(0, 1);
  lcd.write(byte(2));
  lcd.write(byte(3));

  lcd.setCursor(3,0);
  lcd.print("...Coder");
  lcd.setCursor(3,1);
  lcd.print("GitHub");
  delay(2000);
  lcd.clear();

}
