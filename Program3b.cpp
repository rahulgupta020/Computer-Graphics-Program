/* Draw Square and rectangle at the center of the screen

Draw a circle in the center of the screen.

Code:-
*/

//Draw Square and rectangle at the center of the screen.
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	//rectangle(left, top, right, bottom);
	//getmaxx()/2 and getmaxy()/2
	int left, top, right, bottom;
	left = getmaxx()/2-100;
	top = getmaxy()/2-100;
	right = getmaxx()/2+100;
	bottom = getmaxy()/2+100;

	rectangle(left, top, right, bottom);
	getch();
	closegraph();
}
