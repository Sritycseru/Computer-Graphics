<h3>Drawing a national flag</h3>
<b>Proportion of the flag:</b> https://github.com/Masum-Billah1/CSE3221-Computer-Graphics/assets/53857306/f3396640-7470-4822-818f-e14afb774f93
<h3>Translation & Scalling</h3>
<b>Translation: </b> x'=x+tx, y'=y+ty<br>
<b>Scalling: </b> x'=x*sx, y'=y*sy
<h3>Bresenham line drawing</h3>
<b>step1: </b>Calculate dx,dy; dx = x<sub>2</sub>-x<sub>1</sub>, dy = y<sub>2</sub>-y<sub>1</sub><br>
<b>step2: </b> decision parameter p = 2*dy - dx<br>
<b>step3: </b>Condition<br>  
&emsp;case1. p<0 => x<sub>i</sub>+1 = x<sub>i</sub>+1, y<sub>i</sub>+1 = y<sub>i</sub>, p<sub>k</sub>+1 = p<sub>k</sub>+2dy;<br>
&emsp;case2. p>=0 => x<sub>i</sub>+1 = x<sub>i</sub>+1, y<sub>i</sub>+1 = y<sub>i</sub>, p<sub>k</sub>+1 = p<sub>k</sub>+2dy-2dx;
<h3>Midpoint circle drawing</h3>
<b>step1: </b>x<sub>0</sub> = 0, y<sub>0</sub> = r, p<sub>0</sub> = 1.25 - r<br>
<b>step2: </b>x<sub>k+1</sub> = x<sub>k</sub> + 2<br>
&emsp;Case1: p<sub>k</sub> < 0<br>
&emsp;&emsp;y<sub>k+1</sub> = y<sub>k</sub><br>
&emsp;&emsp;p<sub>k+1</sub> = p<sub>k</sub> + 2x<sub>k+1</sub> + 1<br>
&emsp;Case2: p<sub>k</sub> >= 0<br>
&emsp;&emsp;y<sub>k+1</sub> = y<sub>k</sub> - 2<br>
&emsp;&emsp;p<sub>k+1</sub> = p<sub>k</sub> - 2y<sub>k+1</sub> + 2x<sub>k+1</sub> + 1<br>
<b>step3: </b>Center Coordinate: (x<sub>0</sub>, y<sub>0</sub>)<br>
&emsp;x<sub>plot</sub> = x + x<sub>0</sub><br>
&emsp;y<sub>plot</sub> = y + y<sub>0</sub><br>
<b>step4: </b>if(x<sub>plot</sub> > y<sub>plot</sub>) => stop<br>
<b>step5: </b>Generate all the points using 8 way symmetry property of circle.<br>
<b>Ref.: </b>https://github.com/Masum-Billah1/CSE3221-Computer-Graphics/assets/53857306/07d945d9-c752-480b-899a-1125eb36cf32
<h3>Cohen_Sutherland_Line_Clipping_Algorithm</h3>
<b>Step1 :</b> Calculate the slop m = (y<sub>2</sub>-y<sub>1</sub>)/(x<sub>2</sub>-x<sub>1</sub>)<br>
<b>Step2 :</b> Reduce the outside region by the following 8 terms and conditions:<br>
&emsp;if(x<sub>1</sub>>xmax)<br> 
&emsp;&emsp; y<sub>1</sub> = y<sub>1</sub>+(xmax-x<sub>1</sub>)*m=> multiply with slop<br>
&emsp;&emsp; x<sub>1</sub> = xmax<br>
&emsp;if(y1>ymax)<br>
&emsp;&emsp; x<sub>1</sub> = x<sub>1</sub>+(ymax-y<sub>1</sub>)/m=> divide by slop<br>
&emsp;&emsp; y<sub>1</sub> = ymax<br>
....................Thus 8 conditions sould be performed.
<br><br><b>Technique:</b><br>
1. first coordinate condition -> first coordinate calculation.<br>
2. condition x axis -> calculation of y axix must be performed first and vice versa for  y axix condition<br>
&emsp; a) subtraction's first value would be xmax or xmin and second value would be x axix value and vice versa<br>
&emsp; b) slop is multiplied for x axis condition and division should be performed for y axis.<br>
&emsp; c) addition is performed.<br>
2. condition x axis -> calculation of x axix is performed lastly and vice versa. i.e x = xmax or xmin<br>
<b>Ref.(geeksforgeeks): </b>https://github.com/Masum-Billah1/CSE3221-Computer-Graphics/assets/53857306/e606504d-7abe-4866-a891-171c9fe645e0
<h3>Polygon Clipping</h3>
<b>Step1: </b>Implement Cohen Sutherland Line Clipping Algorithm for each line.<br>
<b>Step2: </b>Take the clipping points.<br>
<b>Step3: </b>Connect the point using line if(x1==x2||y1==y2)
