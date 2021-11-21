#include<graphics.h>

int main()
{
	initwindow(1000, 1000);
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	
	setcolor(MAGENTA);
	
	int x1, y1, x2, y2;
	x1 = 200;
	y1 = 300;
	x2 = 600;
	y2 = 300;
	
	line(x1,y1, x2,y2);
	line(x1,y1+100, x2,y2+100);
	line(x1,y1+200, x2,y2+200);
	
	x1 = 300;
	y1 = 200;
	x2 = 300;
	y2 = 600;
	line(x1,y1, x2,y2);
	line(x1+100,y1, x2+100,y2);
	line(x1+200,y1, x2+200,y2);
	
	line(300,300, 500,500);
	
	getch();
}

