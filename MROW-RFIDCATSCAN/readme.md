SEE CODE- already wired correctly, just take the esp32c3 and add reupload the esp32-RFID_120123.ino file
<br>

Occupied ESP32 Pins
<br> RST attached to D0 (pin 2)
<br> SS attached to D4 (pin 6)
<br> Servo pwm switch attached to D3 (pin 5)
<br> Limitswitch attached to D7 (pin 9) 
WHEN difning variables for some reason sp32 hates having pin defined under number 9, yet all other pins can numbered in this way (i.e. 2,4,7,8). To avoid this behavior ONLY have pins numbered #define LIMIT_PIN D7, for pin 9.



(Google Sheets)[https://docs.google.com/spreadsheets/d/1GYzoQbDUlnloQc-wYxD57oQX-_6pd9PYkv-Q2-zd0ek/edit#gid=2017088532]


<br> ESP32 Pinout Reference (link)[https://wiki.seeedstudio.com/XIAO_ESP32C3_Getting_Started/]
<br> Simple Limit switch reference (just use pin as output and have wire connected to NO)[https://www.thegeekpub.com/278078/arduino-limit-switch-tutorial/]


```shell
define LIMIT_SWITCH_PIN 7
void setup() {
  Serial.begin(9600);
  pinMode(LIMIT_SWITCH_PIN, INPUT);
}
 
void loop() {
 
  if (digitalRead(LIMIT_SWITCH_PIN) == HIGH)
  {
    Serial.println("Activated!");
  }
  else
  {
  }
}
```
