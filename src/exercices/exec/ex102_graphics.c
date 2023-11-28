#include <conio.h>
#include <graphics.h>


void main()
{
	int gd = DETECT;
	int gm;
	int i, j = 0;

	initgraph(&gd, &gm, "C:/turbo3/bgi");
	line(20, 32, 215, 32);
	getch();
	closegraph();
}