// C program to check if a
// number is prime
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include <math.h>
#include <stdio.h>


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


int main()
{
     int gd,gm,i,j;
     int count = 1;
     gd=DETECT;
     initgraph(&gd,&gm,"c:\\turboc3\\bgi");
     for(i=0;i<639;i++)
     {
       for(j=0;j<479;j++)
       {
	 count += 1;
	 if(isPrime(count)==1)
	 {
	   putpixel(i,j,WHITE);
	   delay(1);
	 }

       }
     }
     closegraph();
     getch();
	return 0;
}
