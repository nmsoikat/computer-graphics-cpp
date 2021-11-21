#include <graphics.h>

main()
{
	initwindow(1000, 1000);
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	
	setcolor(RED);
	rectangle(200,200, 600,400);
	
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(220,220, RED);
	
	setcolor(RED);
	circle(350, 300, 60);
	setfillstyle(SOLID_FILL, RED);
	floodfill(350,300, RED);
	
	getch();
	closegraph();
}
