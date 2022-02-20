#include "read_cds.h"
#define PIN 35
void setup() {
	Serial.begin(115200)
void loop() {
	double cds;

	cds = read_cds(PIN);
	Serial.println(cds);
	delay(1000);
}
