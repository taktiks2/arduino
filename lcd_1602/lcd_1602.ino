#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
void setup() {
	// LCDの行列を設定
	lcd.begin(16, 2);
	// LCDに文字を表示
	lcd.print("Hello Takeru!");
	// 2行目の表示
	lcd.setCursor(0, 1);
	lcd.print("Let's enjoy!");
}

void loop() {
}
