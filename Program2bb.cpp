/*

Draw a simple hut on the screen.

Code:-
*/

#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	rectangle(160,180,500,420);
	rectangle(260,290,390,420);
	rectangle(180,210,260,270);
	rectangle(390,210,460,270);

	line(160,180,320,50);
	line(500,180,320,50);

	getch();
	closegraph();
}
