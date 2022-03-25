#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "winbgim.h"

#define PICAS  		'P'
#define CORAZONES 	'C'
#define TREBOLES	'T'
#define DIAMANTES	'D'

#define FIJO		0
#define HORIZONTAL	1
#define VERTICAL	2

#define COLOR_NEGRO	0
#define COLOR_ROJO	1
typedef struct{
	int valor;
	char palo;
	short color; // 0 = negro, 1=rojo
	bool visible;
}TCarta;

typedef struct{
	TCarta carta[52];
	int numeroCartas;
	int posX, posY;
}TMazo;

int separacion = 10;

TMazo barajaCompleta;
TMazo mazoGeneral, mazoAuxiliar, mazoFijo[4], mazoPila[7];

void dibujar();
void crearNuevoJuego();
void crearBarajaCompleta();
void dibujarMazo(TMazo , int , int );
void reset();
bool finReparto();
void barajar();
	
int main(int argc, char** argv) {
	
	initwindow(1190, 860);
		
	/*
	while(!kbhit()){
		dibujar();	
	}
	*/
	
	// lo que sigue es para probar el algoritmo de generacion
	crearBarajaCompleta();
	dibujarMazo(barajaCompleta, HORIZONTAL, 30);
	getch();
	cleardevice();
	crearNuevoJuego();
	dibujarMazo(mazoGeneral, HORIZONTAL, 30);
	for(int i=0; i<7;i++)
		dibujarMazo(mazoPila[i], VERTICAL, 30);
	getch();
	
	closegraph();
	return 0;
}

void dibujar(){
	
	drawImageLimit("imagenes/mesa.png", 0, 0, 1190, 860);
	//delay(20);
}

void reset(){
	int i;
	mazoGeneral.numeroCartas = 0;
	mazoGeneral.posX = 10;	
	mazoGeneral.posY = 10;	
	mazoAuxiliar.numeroCartas = 0;
	mazoAuxiliar.posX = 100;	
	mazoAuxiliar.posY = 10;
	
	for(i=0;i<4;i++){
		mazoFijo[i].numeroCartas = 0;
	}
	int x = 10, y= 220;
	
	for(i=0;i<7;i++){
		mazoPila[i].numeroCartas = 0;
		mazoPila[i].posX = x + (i * 150);	
		mazoPila[i].posY = y;
	}
}


void crearBarajaCompleta()
// Creacion de la baraja completa ordenada
{
	int i, t, c = 0;	
	barajaCompleta.numeroCartas = 52;
		
	for(t = 0; t < 4;t++){						
		for(i = 0; i < 13;i++){
			switch(t){
				case 0: //corazones
					barajaCompleta.carta[c].palo = CORAZONES;
					barajaCompleta.carta[c].color = COLOR_ROJO;
					break;
				case 1: //diamantes
					barajaCompleta.carta[c].palo = DIAMANTES;
					barajaCompleta.carta[c].color = COLOR_ROJO;
					break;
				case 2: //picas
					barajaCompleta.carta[c].palo = PICAS;
					barajaCompleta.carta[c].color = COLOR_NEGRO;
					break;
				case 3: //treboles
					barajaCompleta.carta[c].palo = TREBOLES;
					barajaCompleta.carta[c].color = COLOR_NEGRO;
					break;				
			}	
			barajaCompleta.carta[c].valor = i + 1;
			barajaCompleta.carta[c].visible = true;
			c++;
		}
	}	
	return;
}

void crearNuevoJuego(){
	int p = 0;  //PCTD , 0123
	int v = 1;
	int c = 0;

	// establecer condiciones iniciales
	reset();
	crearBarajaCompleta();	
	barajar();			
	return;
}

void dibujarMazo(TMazo b, int sentido, int separacion){
	
	char ruta[50];
	char nombre[6];
	char buffer[5];
	int v;
	char p;	
	int i;
	int c;			
		
	for(c=0; c<b.numeroCartas;c++){
		//printf("Ciclo: %d\n", carta);					

		if(b.carta[c].visible){
			v = b.carta[c].valor;
			p = b.carta[c].palo;		 
			//printf("\tCarta=> Palo: %c    Numero: %d  \n",p, v);	
			
			nombre[0] = p;
			nombre[1] = '\0';
			
			if(v<11){
				itoa(v, buffer, 10);
			}
			else{
				switch(v){
					case 11:
						buffer[0] = 'j';
						break;
					case 12:
						buffer[0] = 'q';
						break;
					case 13:
						buffer[0] = 'k';
						break;
				}			
				buffer[1] = '\0';
			}				
			
			strcat(nombre, buffer);		
			strcat(nombre, ".png");		
							
			strcpy(ruta, "imagenes/");		
			strcat(ruta, nombre);
			
			//convertir a minusculas
			i=0;
			while(ruta[i] != '\0') {
		      	if(isalpha(ruta[i])){
		      		if(ruta[i]>=65 && ruta[i]<=90) //letra mayuscula
		      			ruta[i] += 32;   //la convertimos a minuscula
				}
	      		i++;
	   		}	
	   		
		} // if de visible				
		else{
			strcpy(ruta, "imagenes/reverso.png");
		}
		
   		//printf("\tRuta minusculas: %s\n", ruta);
   		int px, py;
		switch(sentido){
   			case FIJO:
   				px = b.posX;
   				py = b.posY;
   				break;
   			case VERTICAL:
   				px = b.posX;
   				py = b.posY + (c * separacion);
   				break;
   			case HORIZONTAL:
   				px = b.posX + (c * separacion);
   				py = b.posY;
   				break;
		}		
		drawImage(ruta, px, py);							
	}//fin for	
	
}

void barajar(){	
	int valorAleatorioCarta, valorAleatorioMazo; 
	int mazo, carta;
	int p;
	bool listo = false;
	
	// iniciamos valores aleatorios
	srand(time(NULL));
	
	do{
		//escoger en que mazo estara la carta	
		listo = false;
		do{
			valorAleatorioMazo = rand() % 80; // son 8 mazos a repartir: los 7 de pila y el principal
			mazo = (int)(valorAleatorioMazo/10); // mazo donde ubicaremos la carta

			if(mazo!=0){ //mazos pila
				// el mazo tiene espacio para alojar la carta?
				if(mazoPila[mazo-1].numeroCartas >= mazo){									
					continue; // no cabe... buscar otro mazo	
				}
				else{				
					listo = true;			
				}
			}else{
				// es el mazo general, donde inicialmente deben ser 24 cartas
				if(mazoGeneral.numeroCartas >=24){									
					continue;
				}
				else{		
					listo = true;
				}
			}
		}while(!listo);
		
		// El mazo donde va la carta es elegido		
		//escoger la carta
		listo = false;	
		do{
			valorAleatorioCarta = rand() % 520; //Carta a escoger
			carta = (int)(valorAleatorioCarta/10);
			//buscamos si la carta está disponible en la barajaCompleta
			if(barajaCompleta.carta[carta].valor != 0){ // no ha sido sacada
				// la ubicamos en el mazo anteriormente elegido
				if(mazo != 0){ //mazos de pila				
					p = mazoPila[mazo-1].numeroCartas;					
					barajaCompleta.carta[carta].visible = false;
					mazoPila[mazo-1].carta[p] = barajaCompleta.carta[carta];
					mazoPila[mazo-1].numeroCartas++;
				}else{
					// es el mazo general, donde inicialmente deben ser 24 cartas
					p = mazoGeneral.numeroCartas;
					mazoGeneral.carta[p] = barajaCompleta.carta[carta];
					mazoGeneral.numeroCartas++;
				}
				
				//sacamos la carta de la baraja
				barajaCompleta.carta[carta].valor = 0;
				listo = true;
			}				
		}while(!listo);			
	}while(!finReparto());	
	
	// recorremos los mazos de pila y mostramos solo la ultima carta
	for(p=0; p<7; p++){
		mazoPila[p].carta[mazoPila[p].numeroCartas-1].visible = true;
	}
}

bool finReparto(){
	int i;
	for(i=0; i<barajaCompleta.numeroCartas; i++){
		if(barajaCompleta.carta[i].valor != 0)
			return false;
	}
	return true;
}
