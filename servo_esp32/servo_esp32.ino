#include <ESP32Servo.h>
#define SERVO_PIN 16
#define INTERVAL 1000
Servo servo;

void setup() {
	// ソケット番号, パルスの最小値と最大値
	servo.attach(SERVO_PIN);
}

void loop() {
	servo.write(0);
	delay(INTERVAL);
	servo.write(90);
	delay(INTERVAL);
	servo.write(180);
	delay(INTERVAL);
	servo.write(90);
	delay(INTERVAL);
}
