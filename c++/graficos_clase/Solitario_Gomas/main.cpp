#include "winbgim.h"
#include <stdlib.h>
#include <time.h>
#define REVERSO		0


struct carta{
	bool visible;
	bool usada;
	int valor,x,y;
	char direccion[20];
};
struct posicion{
	int x,y;
	carta cart;
	bool valida;
	bool usada;
};
//1-13 Corazones 14-26 Diamantes 
carta mazo[52];
posicion sup1[4];
posicion sup2[24];
posicion sup3[24];
posicion inf[7][19];

void dibujarFondo(){
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,COLOR(11, 197, 174));
	rectangle(0,0,830,700);
	floodfill(1,1,WHITE);
}

void dibujarEspacio(int x, int y){
	setcolor(WHITE);
	rectangle(x,y,x+80,y+100);
	setfillstyle(SOLID_FILL,COLOR(118, 177, 170));
	floodfill(x+1,y+1,WHITE);
	setcolor(WHITE);
	rectangle(x,y,x+80,y+100);
}
void asignarPosiciones(){
	for(int i=0;i<4;i++){
		dibujarEspacio(40+100*i,40);
		sup1[i].x=40+100*i;
		sup1[i].y=40;
		sup1[i].valida=false;
		sup1[i].usada=false;
	}
	
	dibujarEspacio(600,40);
	for(int i=0;i<24;i++){
		sup2[i].x=600;
		sup2[i].y=40;
		sup2[i].valida=true;
		sup2[i].usada=false;
	}
	dibujarEspacio(700,40);
	for(int i=0;i<24;i++){
		sup3[i].x=700;
		sup3[i].y=40;
		sup3[i].valida=true;
		sup3[i].usada=false;
	}
	
	for(int i=0;i<7;i++){
		dibujarEspacio(40+110*i,200);
		for(int j=0;j<19;j++){
			inf[i][j].x=40+110*i;
			inf[i][j].y=200+20*(j);
			if(i-j>-1){
				inf[i][j].valida=true;
				inf[i][j].usada=false;
			}else{
				inf[i][j].valida=false;
			}
		}
	}
}

void dibujarCarta(posicion pos,carta car){
		drawImage(car.direccion,pos.x,pos.y);
}



void crearMazo(){
	for(int i=0;i<52;i++){
		mazo[i].valor=i;
		mazo[i].usada=false;
		srand(time(NULL));
		char temp[20];		
		sprintf(temp,"Imagenes/%d.png",i);
			for(int j=0;j<20;j++){
				mazo[i].direccion[j]=temp[j];
			}
		}
	}
	
void barajarCartas(){
	srand(time(NULL));
	int cont=0;
	for(int i=0; i<28;i++){
		bool cond=false;
		do{
			int r1=rand()%19;
			int r2=rand()%7;
			int r3=rand()%52;
			if(mazo[r3].usada==false && inf[r2][r1].usada==false && inf[r2][r1].valida==true){
				mazo[r3].x=inf[r2][r1].x;
				mazo[r3].y=inf[r2][r1].y;
				inf[r2][r1].cart=mazo[r3];
				inf[r2][r1].usada=true;
				mazo[r3].usada=true;
				cond=true;
				cont++;
			}
		}while(cond==false);
	}
}
	void mostrarCartas(){
	for(int i=0;i<52;i++){
		if(mazo[i].usada==false){
			int j=0;
			do{
				if(sup3[j].usada==false){
					sup3[j].cart=mazo[i];
				}
				j++;
			}while(sup3[i].usada==true);
		}
	
	for(int i=0;i<24;i++)
		dibujarCarta(sup3[i],sup3[i].cart);
	}
}
void moverCarta() {
	int x,y;
	getmouseclick(WM_LBUTTONDOWN,x,y);
	char temp[5];
	sprintf(temp,"%d,%d",x,y);
	outtextxy(x,y,temp);				
	
}
	
int main() {
	int x,y;
	bool click=false;
	initwindow(830,700);
	dibujarFondo();
	asignarPosiciones();
	crearMazo();
	barajarCartas();
	mostrarCartas();
	int pos;
	while(!ismouseclick(WM_RBUTTONDOWN)){
		if(getch()=='1'){
			
			mostrarCartas();
		}
		getmouseclick(WM_LBUTTONDOWN,x,y);		
		delay(10);
		rectangle(x,y,x+3,y+3);
		delay(5);
		char temp[10]="";
		if(x!=-1 && y!=-1) sprintf(temp,"%d,%d",x,y);
		outtextxy(x,y,temp);
		setcolor(BLACK);
		for(int i=0;i<52;i++){
			if((x>mazo[i].x && x<mazo[i].x+80) && (y>mazo[i].y && y<mazo[i].y+20) ){
				sprintf(temp,"%d",mazo[i].valor);
				outtextxy(x,500,temp);
			}
		}
	}
	closegraph();
	return 0;
}

