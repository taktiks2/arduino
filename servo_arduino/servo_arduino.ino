#include <Servo.h>
#define SERVO_SOCKET 9
#define INTERVAL 1000

Servo servo;
void setup() {
	servo.attach(SERVO_SOCKET);
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
