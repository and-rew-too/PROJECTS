GRBL UPLOADING into
<br> [uploading sketch to arduino uno](https://www.youtube.com/watch?v=zUb8tiFCwmk&t=5s)

Default Settings
<br> current draws?
<br> Voltage - minimum 12V, and up to 30V
<br> Voltage for microcontroller - 5V dc power source..

<br> speeds and fees
<br> standard two-flute, cutting way too slow and small chip rate
<br> doing 2x the diameter of tool depth of cut
<br> 508 mm/min or 200 inch / min
<br> [speed/feed calculator](https://gdptooling.com/chipload-calc/)




COM PORT = 5, BaudRate = 9600
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
(NOW, only want z inverted so 
($6 = 128)
<br> [inversion in grbl](https://forum.makerforums.info/t/how-do-i-invert-the-y-and-z-axis-of-my-grbl-cnc-arduino-uno/80114/3)


<br> G90 sets to absolute coordinates. G91 sets it as relative coordinates 
G92 X0 Y0 to zero out, but has not worked

<br>HAD SET THE 0 x step/mm to an eigth step, yet for some reason it only reads it as a half step? anyways, that fixed the noise issue on the stepper motor at lower step/mm settings. 

<br> LASER CUT WORKFLOW IS: using paint or other software to create a 

<br> 2D MILLING WORKFLOW IS: uploadng GRBLtoArduino.ino to microcontroller, using onshape to create dxf, exporting dxf to carbide create, export toolpath into c2d, convert c2d into gcode
<br> [gcode conversion](https://my.carbide3d.com/extractgcode/)

<br> [stepper motor datasheet](https://www.omc-stepperonline.com/3pcs-of-nema-17-bipolar-59ncm-84oz-in-2a-42x48mm-4-wires-w-1m-cable-connector-3-17hs19-2004s1)
<br> [router datasheet](https://shop.carbide3d.com/products/carbide-compact-router)
<br> [tramming basics](https://shapeokoenthusiasts.gitbook.io/shapeoko-cnc-a-to-z/squaring)
<br> [cnc shield basics](https://www.youtube.com/watch?v=zUb8tiFCwmk) 
