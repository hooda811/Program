#include "MUX74HC4067.h"
MUX74HC4067 mux(PA0,PE5,PE4,PE3,PE2);
int En_Pin = PA0;
int S0_Pin = PE5;
int S1_Pin = PE4;
int S2_Pin = PE3;
int S3_Pin = PE2;

void setup()
{
  Serial.begin(9600);
  mux.signalPin(PA0, INPUT, ANALOG);
}

void loop()
{
  SUB_MUX_ANALOG();
}
