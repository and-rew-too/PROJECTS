
A group of LEDs designed to be safe (current limited and overtemp protected), high efficiency (operating at 12V and unknown forward voltage), and bright enough to grow indoor plants year round.
<br> [LED Sizing](https://www.ledgrowlightsdepot.com/blogs/blog/16326275-how-many-led-watts-are-required-per-square-foot-of-grow-space)
<br> [LED Sizing 2](https://www.reddit.com/r/gardening/comments/le3iym/recommended_grow_lights_for_starting_seeds/)
<br> [LED Sizing 3](https://www.reddit.com/r/homeautomation/comments/g6usb4/adding_led_strips_to_room_unsure_about_fuses/fodzepi/)
<br> [Spotting overilluminated plants](https://www.ilovegrowingmarijuana.com/growing/light-burn-on-marijuana-plants)
<br> [When to Plant Indoors around 02/10](https://ucanr.edu/sites/gardenweb/files/29030.pdf)
<br> Avoiding Indoor diseases, most critical is that indoor plants need to watered much less, overwatering easily kills young sprouts and mature plants with root rot.

## Introduction and Relevant Links
300 Leds placed in series, within an IKEA Kallax unit, and within a quadrant of the Kallax will comfortably fit four standard four inch pots, or 1/8 gallon pots. 
<br> Important: Must use aluminum channel for proper heatsinking. 
<br> Important: Must ensure that Kallax vertical height can be increased by removing the middle wood connectors, as plants rapidly grow taller than the individual quadrants can fit. 


## BOM
See bom above, still incomplete

## CAD Files
Onshape link not relevant

## Gerber (PCB) Files
KiCad file name is 010623-efuseTCKE812NL
<br> Include the full file path to KiCad file for schematics

## DETAILS?


## Results and Improvements
Odd switching behavior when intially plugging in where efuse falsely trips, look into adding a capacitor. 
</br> Odd creepage behavior exhibited by the epoxy setting the 2.1mm barrel jack to the wood, explore alternatives. 
</br> Sideways insertion of DC barrel to wood not ideal, could shift the DC barrel position to the left handed side.
</br> Insertion of DC barrel to each individual quadrant is redundant, would be better to find a way to series/parallel connect between each section. --> Current Amperage draw of 100 leds is only 0.7A so 300 is 2.1A, can have a DC barrel splitter like this and split to all four at once. [One to Four way Splitter](https://www.amazon.com/Splitter-Adapter-Cameras-Monitors-2PCS-Black/dp/B09W1C5JN1/) 
