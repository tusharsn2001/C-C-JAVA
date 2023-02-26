#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
  int gd,gm;
  int x  = 320;
  int y  = 240;
  int i=1;
  gd =DETECT;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  circle(x,y,20);
  circle(x,y,40);
  circle(x,y,60);
  while(!kbhit())
  {



    setfillstyle(1,i%15);
    floodfill(x,y,15);
    delay(700);

    setfillstyle(1,(i+1)%15);
    floodfill(x,y+21,15);
    delay(700);

    setfillstyle(1,(i+2)%15);
    floodfill(x,y+41,15);
    delay(700);
    i+=1;

  }
  getch();
  closegraph();
  return 0;
}