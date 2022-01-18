#include <LiquidCrystal.h>
#include <DHT.h>
#define DHT_PIN 3
#define DELAY_TIME 1000

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
DHT dht(DHT_PIN, DHT11);

void setup() {
	// LCD set
	lcd.begin(16, 2);

	// DHT11 set
	Serial.begin(9600);
	dht.begin();
}

void loop() {
	delay(DELAY_TIME);

	float humid = dht.readHumidity();
	float temp = dht.readTemperature();

	if (isnan(humid) || isnan(temp)) {
		lcd.print("Failed");
		return;
	}

	lcd.setCursor(0, 0);
	lcd.print("Humid ");
	lcd.print(humid);
	lcd.print("%");
	lcd.setCursor(0, 1);
	lcd.print("Temp  ");
	lcd.print(temp);
	lcd.print("c");
}
