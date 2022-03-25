#include <iostream>
#include "winbgim.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mx=0, my=0; 
	int downX, downY;
	int upX, upY;	
	char msg[70];
	
	initwindow(800, 500);
	
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, BLACK);
	settextstyle(SANSSERIF_FONT, HORIZ_DIR, 3);
	
	while(!kbhit()){
		
		if(ismouseclick(WM_MOUSEMOVE)){
			getmouseclick(WM_MOUSEMOVE, mx, my);
			sprintf(msg, "La posición actual es: %d, %d", mx, my);
		}
		delay(100);
		bar(100, 100, 800, 150);
		outtextxy(100, 100, msg);	
	}
	
	closegraph();	
	return 0;
}
