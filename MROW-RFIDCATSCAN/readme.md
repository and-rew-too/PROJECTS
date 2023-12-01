

(Google Sheets)[https://docs.google.com/spreadsheets/d/1GYzoQbDUlnloQc-wYxD57oQX-_6pd9PYkv-Q2-zd0ek/edit#gid=2017088532]


<br> ESP32 Pinout Reference (link)[https://wiki.seeedstudio.com/XIAO_ESP32C3_Getting_Started/]
<br> Simple Limit switch reference (just use pin as output and have wire connected to NO)[https://www.thegeekpub.com/278078/arduino-limit-switch-tutorial/]

<br>
<br>
```shell
#define LIMIT_SWITCH_PIN 7
 
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
