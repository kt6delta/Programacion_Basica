#include <iostream>
#include "winbgim.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	initwindow(600, 400);
	
	setcolor(COLOR(238, 83, 238));
	
	line(0,0,600,400);
	
	setcolor(YELLOW);
	circle(100, 100, 40);
	
	rectangle(200, 200, 250, 300);
	setfillstyle(LTSLASH_FILL, RED);
	floodfill(201, 201, YELLOW);
	
	
	getch();
	closegraph();
	
	return 0;
}
