#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n)
{
  int i;
  for (i = 2; i <= n/2; i++) {

		// If n is divisible by any number between
		// 2 and n/2, it is not prime
		if (n % i == 0) {
			return 0;
		}
	}
return 1;
}


int main(void)
{
int gd,gm,errorcode;
int midx,midy;
int count = 1;
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
 t+=0.01;
r+=0.01;

 if(isPrime(count)==1){
putpixel(midx+r*cos(t),midy+r*sin(t),rand()%16);
//t+=0.01;
//r+=0.01;
delay(10);
}
count+=1;
}
getch();
closegraph();
return 0;
}
