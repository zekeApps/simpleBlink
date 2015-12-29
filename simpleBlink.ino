#include "TimerOne.h"
uint8_t eLED = 13;

void setup() {
	DDRB = B11111100;

	Timer1.initialize(1000000L);
	Timer1.attachInterrupt(callback);
}
void callback() {
	PORTB ^= B00100000;
}
void loop() {
}
