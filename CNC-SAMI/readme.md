Default Settings
<br> current draws?
<br> Voltage - minimum 12V, and up to 30V
<br> Voltage for microcontroller - 5V dc power source..

COM PORT = 5, BaudRate = 9600
$0=250.000 (x, step/mm)
$1=250.000 (y, step/mm)
$2=250.000 (z, step/mm)
$8=10.000 (acceleration, mm/sec^2)
$13 units (set to mm)
$130 none
$131 none
$132 none


02-23-2023 Initialized Settings
$0=200.000 (x, step/mm)
$1=200.000 (y, step/mm)
$2=200.000 (z, step/mm)
$8=8.000 (acceleration, mm/sec^2)

<br>HAD SET THE 0 x step/mm to an eigth step, yet for some reason it only reads it as a half step? anyways, that fixed the noise issue on the stepper motor at lower step/mm settings. 

<br> [stepper motor datasheet](https://www.omc-stepperonline.com/3pcs-of-nema-17-bipolar-59ncm-84oz-in-2a-42x48mm-4-wires-w-1m-cable-connector-3-17hs19-2004s1)
<br> [router datasheet](https://shop.carbide3d.com/products/carbide-compact-router)
<br> [tramming basics](https://shapeokoenthusiasts.gitbook.io/shapeoko-cnc-a-to-z/squaring)
<br> [cnc shield basics](https://www.youtube.com/watch?v=zUb8tiFCwmk) 
