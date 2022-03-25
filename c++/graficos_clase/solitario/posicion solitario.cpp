#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int car_random[52];//car_random guarda todas las cartas

struct posicion{
	int cx;//posiciones cartas
	int cy; 
};
struct carta{
	char nombre_carta; //car_random=nombre_carta 
	struct posicion posi_xy; //nombre definitivo
}cartas[52]; 


int main(int argc, char *argv[]) {
	
	int x= 29;
	int y=34;
	for(int i=0; i<24; i++){
		x--;
		y--;
		cout<<"x="<<x<<", y="<<y<<endl;
	}
	
	
	for(int i=0;i<52;i++){
		car_random[i]=i+1;
	}
	
	srand (time(NULL));
	for (int i=1;i<20;i++){
		int pos=rand()%52;
		int pos2=rand()%52;
		int num=car_random[pos];
		car_random[pos]=car_random[pos2];
		car_random[pos2]=num;
	}	 
	cartas[0].posi_xy.cx=29; 
	cartas[0].posi_xy.cy=34;
	for (int c=0;c<24;c++){ //superior
		cartas[c+1].posi_xy.cx =cartas[c].posi_xy.cx-1; //24ar pocisiones
		cartas[c+1].posi_xy.cy =cartas[c].posi_xy.cy-1; 
	}

	int cx=770;
	for (int j=0;j<7;j++) { //inferior
		int cy=150;
		for(int i=0;i<7-j;i++) {
			cout<<cy<<", ";
			cy+=5;
			
		}
		cout<<"x: "<<cx<<endl;
		cx-=125;
	}
	
	return 0;
}

