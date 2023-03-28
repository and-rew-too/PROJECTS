Flow is finding the online ISO equivalent


Using the same font every time
Always using two colos only which is , can add coloring afterward to the wood


Always place the font beneath (font has connected t's, probably fix manually in paint)
(save in paint as a 256 bitmap)
<br>[font is Screener SC, looks great like music video quality](https://www.myfonts.com/products/sc-regular-screener-459137)


<br>[grbl 1.1 arduino upload](https://www.youtube.com/watch?v=m998bYioHqs)
NOT ONLY was firmware updated... for some reason grbl 0.9 is 9600 baud rate, and grbl 1.1 is 115200 baud rate, make sure to change in candle


Test Code Below
$31=1
M4 (do not use M3) only use M3 for focusing
G1 X15 S100 F50

good settings (S1000 is max i think)
Spindle, or pwm power, around 250.  With F feedrate 100


##Conversion to bitmap/png sending
Options for converting into grayscale for easier processing in the image to lasergcode software.

Go into python and run the script LASERpngtobmp.py and check the output file in the Desktop/Plotting folder
(can change up the threshold algorithm and also the cutoff value)

<br> Go into inkscape, open up the photo and do trace bitmap, with multicolor scan, this is most helpful for converting an image with multiple colors that often gets washed out and incorrect contours by using a simple python script. 
