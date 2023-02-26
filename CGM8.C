#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
int gd,gm,errorcode;
int midx,midy;
double r,t;
gd = DETECT;
initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
errorcode = graphresult();
if(errorcode != grOk)
{
printf("%s%s","\n Graphics Error : ",grapherrormsg(errorcode));
printf("%s","\n Press Any Key to EXIT...");
getch();
exit(1);
}
midx = getmaxx() / 2;
midy = getmaxy() / 2;
r = 0.0;
t = 0.0;
while(!kbhit())
{
putpixel(midx+r*cos(t),midy+r*sin(t),rand()%16);
t+=0.01;
r+=0.01;
delay(5);
}
getch();
closegraph();
return 0;
}