/*

Draw a Concentric Circles in the center of the screen.

Code:-
*/

//Draw concentric circle at the center of the screen
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	//circle(x,y,radius);
	int x,y;
	x=getmaxx()/2;
	y=getmaxy()/2;
	circle(x,y,25);
	circle(x,y,50);
	circle(x,y,75);
	circle(x,y,100);

	getch();
	closegraph();
}
