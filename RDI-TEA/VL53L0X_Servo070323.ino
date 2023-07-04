#include "Adafruit_VL53L0X.h"
#include "Servo.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
//these values will not change
int delayt = 300;
//these values will not change
int pos = 0;
// had to add servwrite pos=0 so on startup always initialized at 0 and won't drop product
int baseline = 400;
int offset = 30;
int Ddist = 350 + offset;
int Cdist = 250 + offset;
int Bdist = 150 + offset;
int Adist = 50 + offset;


//creating new servo object below
Servo servD;
Servo servC;
Servo servB;
Servo servA;



void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, HIGH);
  // wait for serial port to open for native USB
  while (! Serial) {
    delay(1);
  }
   
  // We need to attach the servo to the used pin number 
//  Servo1.attach(LEDLpin); 
    servD.write(pos);
    servC.write(pos);
    servB.write(pos);
    servA.write(pos);
    servD.attach(9);
    servC.attach(6);
    servB.attach(5);
    servA.attach(3);
// const int Dpin = 9;
//const int Cpin = 6;
//const int Bpin = 5;
//const int Apin = 3;
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  // power 
  Serial.println(F("VL53L0X API Simple Ranging example\n\n")); 
}




void loop() {
  VL53L0X_RangingMeasurementData_t measure;
    
  //Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    //Serial.print("Distance (mm): "); Serial.println(measure.RangeMilliMeter);
    Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println(" out of range ");
  }
  //code below to define servo as function of positions
  if ((measure.RangeMilliMeter < baseline)&& (measure.RangeMilliMeter > Ddist)) {
  // No object! Continue usual tasks.
  }
  else if ((measure.RangeMilliMeter < Ddist)&& (measure.RangeMilliMeter > Cdist) ) {
  servD.write(40);
  delay(delayt);
  servD.write(0);
  }
  else if ((measure.RangeMilliMeter < Cdist)&& (measure.RangeMilliMeter > Bdist)) {
  servC.write(40);
  delay(delayt);
  servC.write(0);
  }
  else if ((measure.RangeMilliMeter < Bdist)&& (measure.RangeMilliMeter > Adist)) {
  servB.write(40);
  delay(delayt);
  servB.write(0);
  }
  else {
  servA.write(40);
  delay(delayt);
  servA.write(0);}
  
delay(800);
}
