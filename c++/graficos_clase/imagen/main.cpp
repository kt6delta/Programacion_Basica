#include <stdio.h>
#include "winbgim.h"


int pX = 100;
int pY = 70;
int w = 200, h = 200;
int dx, dy;	

void dibujar(); //prototipo

// función principal
int main(int argc, char** argv) {		
	
	int mx, my;	// Para guardar la posicion del mouse
	char msg[70];  // Para el mensaje que se va a mostrar
	
	// Iniciamos la ventana gráfica
	initwindow(900, 600);
	
	setfillstyle(SOLID_FILL, WHITE);  // estilo de relleno
		
	settextstyle(SANSSERIF_FONT, HORIZ_DIR, 3); // estilo del texto a dibujar
	setcolor(BLACK); 
	
	
	dibujar(); //uso
	
	while(!kbhit()){ // mientras NO presionemos ninguna tecla del teclado
		if(ismouseclick(WM_LBUTTONDOWN)){		// presionamos el boton izq del raton?	
			getmouseclick(WM_LBUTTONDOWN, mx, my);  //Si, entonces averiguamos donde está el puntero
			
			// preguntamos si estamos dentro de los limites de la imagen (pikachu)
			if(mx>= pX && mx <= pX+w){
				if(my>= pY && my <= pY+h){	
					
					bar(0,getmaxy()-50,900,600);
					sprintf(msg, "CLICK: %d, %d", mx, my);
					outtextxy(10, getmaxy()-50, msg);
					
					dx = mx - pX;
					dy = my - pY;
										
					while(!ismouseclick(WM_LBUTTONUP)){ //mientras NO soltemos el boton izq del raton
						getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras de MUEVE
						
						delay(20);
						if(mx != -1 && my!=-1){
							pX=mx - dx;
							pY=my - dy;
						}
						sprintf(msg, "MOVE: %d, %d", pX, pY);
						bar(0,getmaxy()-50,900,600);
						outtextxy(10, getmaxy()-50, msg);
						dibujar();						
					}
					clearmouseclick(WM_LBUTTONUP);
				}
			}
			clearmouseclick(WM_LBUTTONDOWN);
			delay(20);
			bar(0,getmaxy()-50,900,600);
			
		}
		sprintf(msg, "POS: %d, %d", pX, pY);
		//bar(0,getmaxy()-50,900,600);
		outtextxy(10, getmaxy()-50, msg);	
	} //fin ciclo						
	
	outtextxy(10, getmaxy()-50, "Presione cualquier tecla para salir...");
	getch();
	
	// Cerramos la ventana gráfica
	closegraph();
	return 0;
}

void dibujar()  //implementacion
{
	bar(0,0,900,600); //limpiar pantalla?
	drawImage("goku.png", 20, 20);		
	drawImageLimit("pikachu.png", pX, pY, w, h);
}

