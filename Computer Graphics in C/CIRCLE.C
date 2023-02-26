#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
void mpcd(int xc,int yc,int r);
int main(void)
{
int gd,gm,errorcode;
int xc,yc,r;
clrscr();
//printf("%s","\n Enter Centre X and Y Coordinates : ");
//scanf("%d%d",&xc,&yc);
//printf("%s","\n Enter Radius of Circle : ");
//scanf("%d",&r);
gd = DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
errorcode = graphresult();
if(errorcode != grOk)
{
printf("%s%s","\n Graphics Error : ",grapherrormsg(errorcode));
printf("%s","\n Press Any Key To EXIT...");
getch();
exit(1);
}
xc= getmaxx()/2;
yc=getmaxy()/2;
mpcd(xc,yc,50);
getch();
closegraph();
return 0;
}
void mpcd(int xc, int yc, int r)
{
int x = 0, y = r,p;
p = 1 - r;
while (x < y)
{
x++;
if (p < 0)
p = p + 2*x + 1;
else
{
y--;
p = p + 2*x - 2*y + 1;
}
line(xc,yc,x+xc,y+yc);
line(xc,yc,y+xc,x+yc);
line(xc,yc,-y+xc,x+yc);
line(xc,yc,-x+xc,y+yc);
line(xc,yc,-x+xc,-y+yc);
line(xc,yc,-y+xc,-x+yc);
line(xc,yc,y+xc,-x+yc);
line(xc,yc,x+xc,-y+yc);
delay(100);
}
}