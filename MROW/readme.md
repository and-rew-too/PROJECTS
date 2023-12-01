
A ESP module, to test ensure cats are being heated enough when in an outdoor shelter where nighttime temperatures can reach below 6 degrees C. 
<br> Need to ensure ESP32 is running below 5.0V, usually around 4.5V and ensure either MQTT or ThingSpeak iot for datalogging, Callmebot for phone notification. Will send out an alert when the measured temperature within the box drops below a specified point, also will have days length of 
<br> Some recommend that cats should stay above 45F, or 7.2C for outdoor cats. 
<br>


## Introduction and Relevant Links
<br> step by step for the esp32 cam .ino uploading [link](https://www.youtube.com/watch?v=7-3piBHV1W0)
<br> example code for intial web server display [link](https://lastminuteengineers.com/esp32-dht11-dht22-web-server-tutorial/)
<br> example code for html 
<br> Recommended ambient temperatures healthy for an outdoor cat to stay in. [link](https://gallant.com/blog/how-cold-is-too-cold-for-your-cat-to-stay-outside/)
<br> Link to access thingspeak, api [link](https://thingspeak.com/channels/2362352/api_keys)
<br> example thingspeak, also relevant code below [link](https://randomnerdtutorials.com/esp32-thingspeak-publish-arduino/)
<br> in setup: 
  WiFiClient client; ThingSpeak.begin(client); 
<br> in loop: int x = ThingSpeak.writeField(ChannelID, 1, "sensor data", WriteAPIKey);
<br> in above include channel number, APIkey as variables
<br> unsigned long ChannelID = X;
const char * WriteAPIKey = "XXXXXXXXXXXXXXXX";



## BOM
See bom above


## 3DPrint and Assembly Guide
1. Solder connectors onto the Xiao-ESP32-3C. Use a usb-c to connect to the Esp32 microcontroller. Also when uploading the code for the ESP32 can change it to fit your needs accordingly, all the should be variables accordingly, such as wifi information, the temperature threshold, thecallmebot api.
<br> 2. Solder the 600mAh battery to the buck converter, and using a small screwdriver rotate the small trim pot on the buck converter until the output voltage reaches 4.5V. 
<br> 3. Connect the 4.5V to power rail and negative to ground rail on the breeadboard. Use dupont connector to put 4.5V to Vin pin, and the GNd to the GND pin.
<br> 4. Hook up the DHT sensor accordingly, with the signal pin to the ESP D2 pin. Hook up the spliced JST, to D3 for the 'solar' ground led. 
<br> 5. 
<br> 5. Secure all individual components down to the wooden base using doublesided tape? or #4 wood screws...
<br> 6. Finish the electronics box, and ensure antennae is stickng out, place in box in final location and check for the wifi strength and that it is uploading sensor data correctly. 



## CAD Files
n/a

## Gerber (PCB) Files
n/a

## Results and Improvements
Slow button response time when trying to turn on/off GPIO button from a phone wifi connection.
</br> 
</br> 
