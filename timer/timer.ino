#include <uTimerLib.h>
#include <ESP32Servo.h>
#define SERVO_PIN 16
Servo servo;

void sayHello() {
	servo.write(0);
	delay(500);
	servo.write(30);
}

void setup() {
	servo.attach(SERVO_PIN);
	TimerLib.setInterval_s(sayHello, 3);
}

void loop() {
	/* servo.write(0); */
	/* delay(500); */
	/* servo.write(30); */
	/* delay(500); */
}
