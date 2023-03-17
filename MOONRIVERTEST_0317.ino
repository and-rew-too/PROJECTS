#include <math.h>
#include <TimeLib.h>



void setup() {
  Serial.begin(9600);
  float date1 = 12.5;
  float date2 = 21.2;
  int d = 0;
  d = round(date2-date1);
  Serial.print("x=");
  Serial.println(d);


  tmElements_t ttoday;
  tmElements_t mrrelease;

  mrrelease.Hour = 8; 
  mrrelease.Minute = 12; 
  mrrelease.Second = 0; 
  mrrelease.Day = 15;
  mrrelease.Month = 2; 
  mrrelease.Year = 2018 - 2000;

  time_t mrsec = makeTime( mrrelease );

  Serial.print( "T1 in seconds since 2000: " );
  Serial.println( mrsec );


  ttoday.Hour = 4; 
  ttoday.Minute = 13; 
  ttoday.Second = 0; 
  ttoday.Day = 18;
  ttoday.Month = 7; 
  ttoday.Year = 2020 - 2000;
  time_t ttodaysec = makeTime( ttoday );

// MOONRIVER RELEASE ON A NEW MOON
// SHIFTING IT BY HALF OF MOON CYCLE TO LINE UP FULL MOONS0
// (29.53 DAYS EQUALS 1275696 HOURS)
  int32_t diff = ttodaysec - mrsec + 1275696;
  uint32_t diffhr = diff / 3600;
  Serial.println( diffhr );
  uint32_t diffday = diffhr / 24;
  Serial.println (diffday);
}

void loop(){

}
