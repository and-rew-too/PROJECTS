## BOM
Spreadsheet must be uploaded with .csv format, using top column for headers and have at a minimum
* **Part
* **Dim/Package
* **Unit Cost
* **Units
* **Cost
* **Supplier
* **Link
(No need to include pricing for common items sold >100 packs like resistors, screws, etc)


## Introduction and Relevant Links
6 smd Leds placed in series, from a garden lighht, Leds for this are powered using a single 9V Battery.

## BOM
See bom above, still incomplete

## CAD Files
Onshape link not relevant

## Gerber (PCB) Files
KiCad file name is 010623-efuseTCKE812NL
<br> Include the full file path to KiCad file for schematics

## Operating Procedure

## Results and Improvements
Troubleshooting faulty PIR when buying in bulk with varying build quality
https://www.youtube.com/watch?v=0ZCxjESVVOEa
Must have the reset time turned to minimum by adjusting the 10kOhm potentiometer
Must ensure that the mosfet turn-on voltage is compatible with the <5V signal from the PIR
Must build a better enclosure to prevent wiring from being accessible
Must have a more secure mounting for the LEDs as it is the least secured component

Tip: PIR sensors will have turn on time of 30-60s where calibration is still in progress and will give false positives
Tip: Can use IR-opaque tape to cover any portion of the sensor, so only motion from a selected portion of of the "room" is picked up 
