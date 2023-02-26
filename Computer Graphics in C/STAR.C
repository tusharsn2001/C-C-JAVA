#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STARS 500
#define MIN_SIZE 1
#define MAX_SIZE 5

int main() {
    int gd = DETECT, gm;
    int i, x, y, size;

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // Seed the random number generator
    srand(time(0));

    for (i = 0; i < NUM_STARS; i++) {
	// Generate random x and y coordinates for the star
	x = rand() % getmaxx();
	y = rand() % getmaxy();

	// Generate a random size for the star
	size = MIN_SIZE + rand() % (MAX_SIZE - MIN_SIZE + 1);

	// Draw the star
	setcolor(WHITE);
	fillellipse(x, y, size, size);
    }

    getch();
    closegraph();
    return 0;
}
