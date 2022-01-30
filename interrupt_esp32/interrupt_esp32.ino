// 割り込み処理で書き換えるグローバル変数
volatile boolean pushed = false;
// ピン番号
const int switch_pin = 2;
const int led_pin = 18;

void IRAM_ATTR onPushed() {
	pushed = true;
}

void setup() {
	pinMode(switch_pin, INPUT_PULLUP);
	pinMode(led_pin, OUTPUT);
	attachInterrupt(switch_pin, onPushed, FALLING);
}

void loop() {
	if (pushed == true) {
		digitalWrite(led_pin, HIGH);
		delay(1000);
		digitalWrite(led_pin, LOW);
		pushed = false;
	}
}
