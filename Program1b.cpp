/*

Draw a co-ordinate axis at the center of the screen.

Code:-
*/

#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT, gm;
	clrscr();
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	int xmax, ymax;
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2, 0, xmax/2, ymax);
	line(0, ymax/2, xmax, ymax/2);

	getch();
	closegraph();
}
