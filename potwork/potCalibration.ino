#include <ECE3.h>

uint16_t sensorValues[8];


int analogPin = A3;
int val = 0;

void setup() {
  ECE3_Init();
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  for (unsigned char i = 0; i < 5; i++) {
    val = analogRead(analogPin);
    Serial.print(val);
    Serial.print(',');
    delay(300);
  }
  Serial.print('\n');
  delay(5000);
}
