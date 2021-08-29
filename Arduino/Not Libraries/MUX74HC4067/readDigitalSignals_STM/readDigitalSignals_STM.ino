#include "MUX74HC4067.h"

// Creates a MUX74HC4067 instance
// 1st argument is the Arduino PIN to which the EN pin connects
// 2nd-5th arguments are the Arduino PINs to which the S0-S3 pins connect
MUX74HC4067 mux(PE6, PH1, PC14, PC15, PC16);
#define En_pin PE6;
#define S0_pin PH1;
#define S1_pin PC14;
#define S2_pin PC15;
#define S3_pin PC16;

void setup()
{
	Serial.begin();
	mux.signalPin(PE6, INPUT, DIGITAL);
}

// Reads the 16 channels and reports on the serial monitor
// if the corresponding push button is pressed
void loop()
{
	byte data;

	for (byte i = 0; i < 16; ++i)
	{
		// Reads from channel i and returns HIGH or LOW
		data = mux.read(i);

		Serial.print(i);
		Serial.print(" is ");
		if ( data == HIGH ) Serial.println("not pressed");
		else if ( data == LOW ) Serial.println("pressed");
	}
	Serial.println();
	
	delay(1500);
}
