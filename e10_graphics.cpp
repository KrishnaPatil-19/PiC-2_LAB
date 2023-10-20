#include <stdio.h>
#include <conio.h>
#include <graphics.h> //included graphics.h header file for drawing graphics
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);
	outtext("Graphics in C : -");
	setcolor(BLACK);
	outtextxy(30, 10, "Drawing shapes using graphics : ");
	setcolor(BLACK);
	circle(50, 50, 25);
	setcolor(BLACK);
	rectangle(30,90,90,120);
	setcolor(BLACK);
	line(30,130,80,130);
	setcolor(BLACK);
	ellipse(70,160,0,360,40,20);
	setcolor(BLACK);
	ellipse(70,200,140,360,40,20);
	setcolor(BLACK);
	arc(70,260,0,160,30);
	putpixel(70,270,BLACK);
	setfillstyle(1, BLACK);
	bar(30,280,80,310);
	getch();
	closegraph();
	return 0;
}
