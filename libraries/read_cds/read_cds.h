#ifndef _READ_CHSH_
#define _READ_CHSH_
#include <Arduino.h>

#if defined(ESP32)
const int dac_max = 4095;
#else
const int dac_max = 1023;
#endif

double read_cds(int pin);
#endif
