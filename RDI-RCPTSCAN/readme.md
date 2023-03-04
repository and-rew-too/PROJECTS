
A ESP module, to test out ESP32 software and wifi connectivity.
<br> Need to ensure ESP32 is running on 5.0V? and ensure google drive connectivity is setup. 
<br> [project inspiration](https://github.com/gsampallo/esp32cam-gdrive)


<br> step by step for the esp32 cam .ino uploading [link](https://www.youtube.com/watch?v=7-3piBHV1W0)
<br> [create a shareable link](https://developers.google.com/apps-script/guides/web)
<br> [shared link](https://script.google.com/macros/s/AKfycbydwTywCCrCOBziBzUhuuI8i2scXxNOAhV3JpvEg9_Cy3vjeMg-clcN6mPMJNNyn3ErFw/exec)

## Introduction and Relevant Links
<br> important:  

## BOM
See bom above, still incomplete

## CAD Files
Onshape link not relevant

## Gerber (PCB) Files
KiCad file link not relevant

## ESP32CAM UPLOAD INSTRUCTIONS
Sample code for using flash led below
```shell
// ledPin refers to ESP32-CAM GPIO 4 (flashlight)
const int ledPin = 4;

void setup() {
  // initialize digital pin ledPin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(2000);
}
```
Sample code for esp32 wifi connectivity below

## Results and Improvements
Odd switching behavior when intially plugging in where efuse falsely trips, look into adding a capacitor. 
</br> Odd creepage behavior exhibited by the epoxy setting the 2.1mm barrel jack to the wood, explore alternatives. 
</br> Sideways insertion of DC barrel to wood not ideal, could shift the DC barrel position to the left handed side.
</br> Insertion of DC barrel to each individual quadrant is redundant, would be better to find a way to series/parallel connect between each section. --> Current Amperage draw of 100 leds is only 0.7A so 300 is 2.1A, can have a DC barrel splitter like this and split to all four at once. [One to Four way Splitter](https://www.amazon.com/Splitter-Adapter-Cameras-Monitors-2PCS-Black/dp/B09W1C5JN1/) 
