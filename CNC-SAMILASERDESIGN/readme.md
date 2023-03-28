## Image conversion to bitmap/png 
Options for converting into grayscale for easier processing in the image to lasergcode software.

Go into python and run the script LASERpngtobmp.py and check the output file in the Desktop/Plotting folder
(can change up the threshold algorithm and also the cutoff value)

<br> Go into inkscape, open up the photo and do trace bitmap, with multicolor scan, this is most helpful for converting an image with multiple colors that often gets washed out and incorrect contours by using a simple python script. 

## Image Font Addition
Using the same font every time
Always using two colors only which is , can add coloring afterward to the wood

Always place the font beneath (font has connected t's, probably fix manually in paint)
(save in paint as a 256 bitmap or as a png for less cleanup)
<br>[font is Screener SC, looks great like music video quality](https://www.myfonts.com/products/sc-regular-screener-459137)


## GRBL troubleshoot
<br>[grbl 1.1 arduino upload](https://www.youtube.com/watch?v=m998bYioHqs)
NOT ONLY was firmware updated... for some reason grbl 0.9 is 9600 baud rate, and grbl 1.1 is 115200 baud rate, make sure to change in candle

## GRBL Test
Test Code Below
$31=1
M4 (do not use M3) only use M3 for focusing
G1 X15 S100 F50

good settings (S1000 is max i think)
Spindle, or pwm power, around 250.  With F feedrate 100
Can manually put low spindle power and then put M3 then immediately M5 to see where the spot size is located.

3.3mm is the distance from the lens to 
37?mm is the distance from where the bottom of the aluminum z-axis holding and the very top of the workpiece (can adjust the z axis upwards or downward depending on the height of the material to be ablated. 



