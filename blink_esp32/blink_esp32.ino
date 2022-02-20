#define LED_SOCKET 18
#define INTERVAL 500

void setup() {
	pinMode(LED_SOCKET, OUTPUT);
}

void loop() {
	digitalWrite(LED_SOCKET, HIGH);
	delay(INTERVAL);

	digitalWrite(LED_SOCKET, LOW);
	delay(INTERVAL);
}
