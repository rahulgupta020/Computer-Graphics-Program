/*

Draw a circle in the center of the screen.

Code:-
*/

#include<graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	//circle(x, y, radius);
	int x,y,radius=100;
	x=getmaxx()/2;
	y=getmaxy()/2;

	outtextxy(150,170,"Circle");
	circle(x,y,radius);

	getch();
	closegraph();
}
