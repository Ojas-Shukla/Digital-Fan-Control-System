#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define SERVO_PIN 9

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo fanServo;

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  lcd.init();
  lcd.backlight();
  
  fanServo.attach(SERVO_PIN);
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Sensor Error!");
    return;
  }

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");

  int angle;

  if (temp < 25) {
    angle = 0;        // Fan OFF
  } 
  else if (temp < 35) {
    angle = 90;       // Medium
  } 
  else {
    angle = 180;      // Full Speed
  }

  fanServo.write(angle);

  lcd.setCursor(0,1);
  lcd.print("Fan Angle: ");
  lcd.print(angle);

  delay(2000);
}