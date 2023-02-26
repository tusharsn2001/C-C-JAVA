#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
int main(void)
{
int gd,gm,errorcode,maxRadi;
int midx,midy,r;
printf("Enter max radius: ");
scanf("%d",&maxRadi);
gd = DETECT;
initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
errorcode = graphresult();
if(errorcode != grOk)
{
printf("%s%s","\n Press Any Key to EXIT...",grapherrormsg(errorcode));
printf("%s","\n Press Any Key to EXIT...");
getch();
exit(1);
}
midx = getmaxx() / 2;
midy = getmaxy() / 2;
r=10;
while(r<maxRadi)
{
setcolor(WHITE);

circle(midx,midy,r);
r += 5;
/*else
circle(midx,midy,r--);
if(r>200 || r<1)
{
if(flag == 1)
flag = 0;
else
flag = 1;
}*/
// delay(50);
}
getch();
closegraph();
return 0;
}