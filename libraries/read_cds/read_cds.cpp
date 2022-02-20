#include "read_cds.h"

double read_cds(int pin) {
	int dac;
	double cds;

	dac = analogRead(pin);
	cds = (double) dac / dac_max * 100;
	return cds;
}
