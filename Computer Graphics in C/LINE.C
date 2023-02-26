#include <stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>



// structure to represent a point on the screen

// function to draw a line on the screen
int main(void) {

double c,s,angle=1; // angle of rotation in degrees
int gd,gm,midx,midy;
int x1;
int y1;
int x2;
int y2;
 gd = DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx = getmaxx()/2;
midy = getmaxx()/2;
x1 = midx-50;
y1 = midy;
x2 = midx+50;
y2 = midy;
line(x1,y1,x2,y2);
while(!kbhit())
{
  c = cos(angle*3.14/180);
  s = sin(angle*3.14/180);
  x1 = floor(x1*c+y1*s);
  y1 = floor(-x1*s+y1*s);
  x2 = floor(x2*c+y2*s);
  y2 = floor(-x2*s+y2*c);
  line(x1,y1,x2,y2);
  delay(100);
}
getch();
closegraph();
return 0;
}