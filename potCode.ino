#include <ECE3.h>

uint16_t sensorValues[8];
float coeff[5];
int val = 0;


const int analogPin = A3; // Pin 5.2 
const int potNum = 1; //Check potentiometer label

void setup() {
  ECE3_Init();
  Serial.begin(9600);
  switch(potNum) { //potentiometer regression weights
    case 1:
      coeff = {-5.5956E-11, 1.4965E-08, 1.5342E-04, -2.3004E-02, -5.1778E1};
      break;
    case 2:
      coeff = {-1.4290E-10, 2.5670E-07, -9.1671E-05, 7.3302E-02, -49.437E1};
      break;
    case 3:
      coeff = {-8.196E-11, 1.2784E-07, -8.2524E-06, 5.3073e-02, -47.450E1};
      break;
    default:
      coeff = {0,0,0,0,0}
      break;
  }
  delay(2000);  
}

float model(int X) { //returns true distance as a function of potentiometer reading 
  xsquared = X*X
  xcubed = xsquared*X
  xfourth = xcubed*X
  return xfourth*coeff[0]+xcubed*coeff[1]+xsquared*coeff[2]+X*coeff[3]+coeff[4];
}

void loop() {
  ECE3_read_IR(sensorValues);
  val = analogRead(analogPin); 
  Serial.print(model(val));
  for (unsigned char i = 0; i < 8; i++) {
    Serial.print('\t');
    Serial.print(sensorValues[i]);
    }
   Serial.print('\n');
  delay(200);
}






