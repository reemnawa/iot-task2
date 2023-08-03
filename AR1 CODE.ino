// C++ code
//
#include <Wire.h>
int pushButton = A0;

int x = 1;

void setup()
{
  Wire.begin();
  pinMode(pushButton, INPUT);
}

void loop()
{
   Wire.beginTransmission(1);
   x = digitalRead(pushButton);
   Wire.write(x);
   Wire.endTransmission();
   delay(500);
}
