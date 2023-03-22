## Introduction and Relevant Links
~a 350 dollar compact CNC machine dimensions of 13"x16"x20", that will be able to carve out patterns in soft metals, woods, and plastics.

Most pertinent items to be purchased are include below
<br>[1/4 0.40HP 63mm Router](https://www.ebay.com/itm/385440750929)
<br>[CNC Shield with A4988 Drivers](https://www.ebay.com/itm/292161403451)

Router Details Unloaded Speed:	30000RPM // Voltage:110V // Model:ML79 // Power:300W //Material: ABS Plastic+Metal // Color: Red//Power cord length:1.5m
Item was 385440750929 //shengyuwangluo01 

Voltage needed is one 110VAC Outlet, and one 12V plug, (12V splits to fan, laser, cnc shield)

## BOM
See bom above, still incomplete

## CAD Files
Onshape link still in progress

## Gerber (PCB) Files
KiCad files not relevant

## Operating Procedures
GRBL UPLOADING first time to microcontroller
<br> [uploading sketch to arduino uno](https://www.youtube.com/watch?v=zUb8tiFCwmk&t=5s)

GRBL Default Settings
<br> current draws?
<br> Voltage - minimum 12V, and up to 30V
<br> Voltage for microcontroller - 5V dc power source..

<br> Speeds and Feeds
<br> standard two-flute, cutting way too slow and small chip rate
<br> doing 2x the diameter of tool depth of cut
<br> 508 mm/min or 200 inch / min
<br> [speed/feed calculator](https://gdptooling.com/chipload-calc/)


GRBL/GCODE SETTINGS 
<br> HAD to solder jumpers beneath the A4988 boards on the cnc sheld, and changed microstepping from full to eigth step, yet for some reason it only reads it as a half step? Still this fixed the noise issue on the stepper motor at lower step/mm s
G90 sets to absolute coordinates. G91 sets it as relative coordinates 
G92 X0 Y0 to zero out, but has not worked

<br> COM PORT = 5, BaudRate = 9600
$0=250.000 (x, step/mm)
$1=250.000 (y, step/mm)
$2=250.000 (z, step/mm)
$8=10.000 (acceleration, mm/sec^2)
$13 units (set to mm)
$130 none
$131 none
$132 none
$6 = 192


02-23-2023 Initialized Settings
$0=200.000 (x, step/mm)
$1=200.000 (y, step/mm)
$2=200.000 (z, step/mm)
$8=8.000 (acceleration, mm/sec^2)
(Only want z inverted so set $6 = 128)
<br> [inversion in grbl](https://forum.makerforums.info/t/how-do-i-invert-the-y-and-z-axis-of-my-grbl-cnc-arduino-uno/80114/3)




## Results and Improvements
Improved? voltage indicators when running? https://www.instructables.com/LED-voltage-range-indicator/
Variable speed for rpm control?
Dust Boot?

## Workflow
<br> LASER CUT WORKFLOW IS: using paint or other software to create a 

<br> 2D MILLING WORKFLOW IS: uploadng GRBLtoArduino.ino to microcontroller, using onshape to create dxf, exporting dxf to carbide create, export toolpath into c2d, convert c2d into gcode
<br> [gcode conversion](https://my.carbide3d.com/extractgcode/)

<br> [stepper motor datasheet](https://www.omc-stepperonline.com/3pcs-of-nema-17-bipolar-59ncm-84oz-in-2a-42x48mm-4-wires-w-1m-cable-connector-3-17hs19-2004s1)
<br> [router datasheet](https://shop.carbide3d.com/products/carbide-compact-router)
<br> [tramming basics](https://shapeokoenthusiasts.gitbook.io/shapeoko-cnc-a-to-z/squaring)
<br> [cnc shield basics](https://www.youtube.com/watch?v=zUb8tiFCwmk) 

<br> [laser safety description class 4](https://www.amazon.com/SainSmart-Genmitsu-Machine-3018-MX3-3018-PROVer/dp/B07VHJ7JNW/)
<br> [laser safety example](https://www.lasersafetyfacts.com/4/)
<br> [laser usage example](https://www.youtube.com/watch?v=ZPyIuLlcuIE)
