#include "winbgim.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct posicion{
	int cx;//posiciones cartas
	int cy; 
};
struct carta{
	char direccion[15];  
	struct posicion pos; //nombre definitivo
	bool color; // 0-negro 1-rojo
	short palo; // 1-corazones, 2-diamantes, 3-trebol, 4-picas
}cartas[51]; 

int carta_mover[51]; //guarda la carta 	que cumple con la posicion sup
//corazones  0-12
//diamantes 13-25
//treboles 26-38
//picas 39-51

void fondo(){
	setfillstyle(SOLID_FILL, COLOR(34, 177, 76)); //color y estilo de relleno
	bar(0, 0, 900 ,500); //dibuja rectangulo
	floodfill(0, 0, YELLOW); //colorea toda la pantalla
	setcolor(WHITE);
	//inferiores
	int Px=20;
	int Py=95;
	for (int i=0;i<7;i++){
		rectangle(Px, 150, Py, 250);
		Px+=125;
		Py+=125;
	}
	//superiores
	rectangle(29, 34, 95, 125);
	rectangle(149, 34, 225, 125);
	Px=395;
	Py=470;
	for (int i=0;i<4;i++){
		rectangle(Px, 25, Py, 125);
		Px+=125;
		Py+=125;
	}
}

void pos_inicial(){	
	
	cartas[0].pos.cx=50; 
	cartas[0].pos.cy=55;
	for (int c=0;c<24;c++){ //superior	
		cartas[c+1].pos.cx =cartas[c].pos.cx-1; //24ras pocisiones
		cartas[c+1].pos.cy =cartas[c].pos.cy-1; 
	}
	
	cartas[24].pos.cx=770;
	int conta=24;
	int conta2=24;
	for (int j=7;j>1;j--){  //inferior posicion
		cartas[conta].pos.cy=150;
		conta2+=j;
		for(int i=conta;i<conta2;i++){
			cartas[1+i].pos.cx=cartas[i].pos.cx;
			cartas[1+i].pos.cy=cartas[i].pos.cy+5;
		}
		conta+=j;
		cartas[conta].pos.cx=cartas[conta].pos.cx-125;
	}
	cartas[51].pos.cx=20;
	cartas[51].pos.cy=150;
}

void crearMazo(){
	
	//direccion ordenada 
	for (int i=0; i<52; i++){		
		char temp[15], temp2[10];
		strcpy(temp,"cartas/");
		itoa(i,temp2,10);
		strcat(temp2, ".png");
		strcat(temp, temp2);
		strcat(cartas[i].direccion,temp);
	}	
	
	//color y palo de las cartas y visible
	for (int i=0; i<52; i++){
		if (i>=0 && i<=12){
			cartas[i].color=1;
			cartas[i].palo=1;
		}
		if (i>=13 && i<=25){
			cartas[i].color=1;
			cartas[i].palo=2;
		}
		if (i>=26 && i<=38){
			cartas[i].color=0;
			cartas[i].palo=3;
		}
		if (i>=39 && i<=51){
			cartas[i].color=0;
			cartas[i].palo=4;
		}
	}
	
	//desorganizar posicion
	srand (time(NULL));
	for (int i=0;i<100;i++){
		int pos=rand()%52;
		int pos2=rand()%52;
		
		int num=cartas[pos].pos.cx;
		int num2=cartas[pos].pos.cy;
		
		cartas[pos].pos.cx=cartas[pos2].pos.cx;
		cartas[pos].pos.cy=cartas[pos2].pos.cy;
		
		cartas[pos2].pos.cx=num;
		cartas[pos2].pos.cy=num2;
		
	}
}

void dibujar(int num_carta, int pos_x, int pos_y){
	drawImageLimit(cartas[num_carta].direccion, cartas[pos_x].pos.cx, cartas[pos_y].pos.cy, 75 , 100);
}
void dibujo_inicial(){
	for (int c=0;c<52;c++){ // dibujo superior
		if(cartas[c].pos.cx<=29 && cartas[c].pos.cx>=5  && cartas[c].pos.cy<=34 && cartas[c].pos.cy>=10 ){
			int i=0;
			drawImageLimit("cartas/n.png", cartas[c].pos.cx, cartas[c].pos.cy, 75 , 100);
			carta_mover[i]=c; //ya llenaste 24 espacios
			i++;
		}
	}
	
	int px=770;
	for (int j=0;j<7;j++) { // dibujo inferior
		int py=150;
		for(int i=0;i<6-j;i++) {
			drawImageLimit("cartas/n.png", px, py, 75, 100);
			py+=5;
		}
		px-=125;
	}
	int j=24;// carta inf
	for(int i=0; i<52; i++){
		int x=770;
		int y=180;
		while(x>19){
			if(cartas[i].pos.cx==x && cartas[i].pos.cy==y){
				dibujar(i, i, i);
				carta_mover[j]=i;// cartas visible
				j++;
			}
			x=x-125;
			y=y-5;
		}
	}
	/* ver las cartasr ocultas
	for(int i=0; i<52; i++)
	dibujar(i, i);
	*/
}

int main(int argc, char** argv) {
	initwindow(900, 500);
	fondo();
	pos_inicial();
	crearMazo();
	dibujo_inicial();
	
	
	while(!kbhit()){
		int mx, my;
		if(ismouseclick(WM_LBUTTONDOWN)){ // presionamos mause izqui?
			getmouseclick(WM_LBUTTONDOWN, mx, my); // guardar ubicacion puntero
			//limites de la imagen
			if(mx>=29 && mx<=104 && my>=34 && my<=134 ){ 
			
				bar(cartas[carta_mover[0]].pos.cx ,cartas[carta_mover[0]].pos.cy ,cartas[carta_mover[0]].pos.cx,cartas[carta_mover[0]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[0]].pos.cx, cartas[carta_mover[0]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[0]].pos.cx;
				dy =my - cartas[carta_mover[0]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[0]].pos.cx= mx-dx; 
						cartas[carta_mover[0]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[0]].pos.cx ,cartas[carta_mover[0]].pos.cy ,cartas[carta_mover[0]].pos.cx+75,cartas[carta_mover[0]].pos.cy+100);
					dibujar(carta_mover[0],carta_mover[0], carta_mover[0]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			
			if(mx>=770 && mx<=845 && my>=180 && my<=280 ){
				bar(cartas[carta_mover[24]].pos.cx ,cartas[carta_mover[24]].pos.cy ,cartas[carta_mover[24]].pos.cx,cartas[carta_mover[24]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[24]].pos.cx, cartas[carta_mover[24]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[24]].pos.cx;
				dy =my - cartas[carta_mover[24]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[24]].pos.cx= mx-dx; 
						cartas[carta_mover[24]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[24]].pos.cx ,cartas[carta_mover[24]].pos.cy ,cartas[carta_mover[24]].pos.cx+75,cartas[carta_mover[24]].pos.cy+100);
					dibujar(carta_mover[24],carta_mover[24], carta_mover[24]);
				}
				clearmouseclick(WM_LBUTTONUP);

			}
			//aqui es puro copypaste
			if(mx>=645 && mx<=720 && my>=175 && my<=275 ){
				bar(cartas[carta_mover[25]].pos.cx ,cartas[carta_mover[25]].pos.cy ,cartas[carta_mover[25]].pos.cx,cartas[carta_mover[25]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[25]].pos.cx, cartas[carta_mover[25]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[25]].pos.cx;
				dy =my - cartas[carta_mover[25]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[25]].pos.cx= mx-dx; 
						cartas[carta_mover[25]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[25]].pos.cx ,cartas[carta_mover[25]].pos.cy ,cartas[carta_mover[25]].pos.cx+75,cartas[carta_mover[25]].pos.cy+100);
					dibujar(carta_mover[25],carta_mover[25], carta_mover[25]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			if(mx>=520 && mx<=595 && my>=170 && my<=270 ){
				bar(cartas[carta_mover[26]].pos.cx ,cartas[carta_mover[26]].pos.cy ,cartas[carta_mover[26]].pos.cx,cartas[carta_mover[26]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[26]].pos.cx, cartas[carta_mover[26]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[26]].pos.cx;
				dy =my - cartas[carta_mover[26]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[26]].pos.cx= mx-dx; 
						cartas[carta_mover[26]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[26]].pos.cx ,cartas[carta_mover[26]].pos.cy ,cartas[carta_mover[26]].pos.cx+75,cartas[carta_mover[26]].pos.cy+100);
					dibujar(carta_mover[26],carta_mover[24], carta_mover[26]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			if(mx>=395 && mx<=470 && my>=165 && my<=265 ){
				bar(cartas[carta_mover[27]].pos.cx ,cartas[carta_mover[27]].pos.cy ,cartas[carta_mover[27]].pos.cx,cartas[carta_mover[27]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[27]].pos.cx, cartas[carta_mover[27]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[27]].pos.cx;
				dy =my - cartas[carta_mover[27]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[27]].pos.cx= mx-dx; 
						cartas[carta_mover[27]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[27]].pos.cx ,cartas[carta_mover[27]].pos.cy ,cartas[carta_mover[24]].pos.cx+75,cartas[carta_mover[27]].pos.cy+100);
					dibujar(carta_mover[27],carta_mover[27], carta_mover[27]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			if(mx>=270 && mx<=345 && my>=160 && my<=260 ){
				bar(cartas[carta_mover[28]].pos.cx ,cartas[carta_mover[28]].pos.cy ,cartas[carta_mover[28]].pos.cx,cartas[carta_mover[28]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[28]].pos.cx, cartas[carta_mover[28]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[28]].pos.cx;
				dy =my - cartas[carta_mover[28]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[28]].pos.cx= mx-dx; 
						cartas[carta_mover[28]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[28]].pos.cx ,cartas[carta_mover[28]].pos.cy ,cartas[carta_mover[28]].pos.cx+75,cartas[carta_mover[28]].pos.cy+100);
					dibujar(carta_mover[28],carta_mover[28], carta_mover[28]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			if(mx>=145 && mx<=220 && my>=155 && my<=255 ){
				bar(cartas[carta_mover[29]].pos.cx ,cartas[carta_mover[29]].pos.cy ,cartas[carta_mover[29]].pos.cx,cartas[carta_mover[29]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[29]].pos.cx, cartas[carta_mover[29]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[29]].pos.cx;
				dy =my - cartas[carta_mover[29]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[29]].pos.cx= mx-dx; 
						cartas[carta_mover[29]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[29]].pos.cx ,cartas[carta_mover[29]].pos.cy ,cartas[carta_mover[29]].pos.cx+75,cartas[carta_mover[29]].pos.cy+100);
					dibujar(carta_mover[29],carta_mover[29], carta_mover[29]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
			if(mx>=20 && mx<=95 && my>=150 && my<=250 ){
				bar(cartas[carta_mover[29]].pos.cx ,cartas[carta_mover[29]].pos.cy ,cartas[carta_mover[29]].pos.cx,cartas[carta_mover[29]].pos.cy); //cuadrado en la posicion de esa carta
				drawImageLimit("cartas/n.png", cartas[carta_mover[29]].pos.cx, cartas[carta_mover[29]].pos.cy, 75 , 100);
		
				int dx, dy; // solo guarda datos temp
				dx =mx - cartas[carta_mover[29]].pos.cx;
				dy =my - cartas[carta_mover[29]].pos.cy;
				
				while(!ismouseclick(WM_LBUTTONUP)){ //mientras no soltemos el boton
					getmouseclick(WM_MOUSEMOVE, mx, my); // donde esta el puntero mientras se MUEVE
					
					delay(20);
					if(mx != -1 && my!=-1){
						cartas[carta_mover[29]].pos.cx= mx-dx; 
						cartas[carta_mover[29]].pos.cy= my-dy;
					}
					bar(cartas[carta_mover[29]].pos.cx ,cartas[carta_mover[29]].pos.cy ,cartas[carta_mover[29]].pos.cx+75,cartas[carta_mover[29]].pos.cy+100);
					dibujar(carta_mover[29],carta_mover[29], carta_mover[29]);
				}
				clearmouseclick(WM_LBUTTONUP);
			}
		
		}
	}
	
	getch();
	closegraph();
	
	return 0;
}	
