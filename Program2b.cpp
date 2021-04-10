/*

Draw a simple hut on the screen.

Code:-
*/

//Draw a simple hut on screen.
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	//top
	line(320,70,190,180);
	line(190,180,450,180);
	line(450,180,320,70);

	//wall
	line(190,180,190,400);
	line(190,400,450,400);
	line(450,400,450,180);

	//window1
	line(220,200,220,270);
	line(220,270,300,270);
	line(300,270,300,200);
	line(300,200,220,200);

	//window2
	line(350,200,350,270);
	line(350,270,420,270);
	line(420,270,420,200);
	line(420,200,350,200);

	//door
	line(280,400,280,300);
	line(280,300,360,300);
	line(360,300,360,400);

	getch();
	closegraph();

}
