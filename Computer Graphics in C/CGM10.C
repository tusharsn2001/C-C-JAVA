#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
int gd,gm,errorcode;
int midx, midy, i;
gd = DETECT;
initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
errorcode = graphresult();
if (errorcode != grOk)
{
printf("Graphics error: %s\n", grapherrormsg(errorcode));
printf("Press any key to halt:");
getch();
exit(1);
}
midx = getmaxx() / 2;
midy = getmaxy() / 2;
for (i=EMPTY_FILL; i<USER_FILL; i++)
{
setfillstyle(i, WHITE);
bar3d(midx-50, midy-100, midx+50, midy+100, 20, 1);
getch();
}
getch();
closegraph();
return 0;
}