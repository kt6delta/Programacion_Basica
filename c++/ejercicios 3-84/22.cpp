#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	
	int m,punto,i,puntopc,pc;
	punto=0;
	puntopc=0;
	for (i=0;i!=3;i++){
		
		cout<<"coloque 1 para piedra,2 para papel, 3 para tijeras, 4 para lagarto, 5 para spock"<<endl;
		cin>>m;
		pc = 1 + rand() % (5); 
		switch (m){
		case 1:
			if (pc==m) {
				cout<<"empate, pc saco piedra"<<endl;
			}
			
			if (pc==3 || pc==4){
				if (pc==3){
					cout<<"ganaste, pc saco tijeras"<<endl;
				}
				if (pc==4){
					cout<<"ganaste, pc saco lagarto"<<endl;
				}
				punto++;
			}
		
			if (pc==2 || pc==5){
				if (pc==2){
					cout<<"perdiste, pc saco papel"<<endl;
				}
				if (pc==5){
					cout<<"ganaste, pc saco spock"<<endl;
				}
				puntopc++;
			}
			break;
		case 2:
			if (pc==m) {
				cout<<"empate, pc saco papel"<<endl;
			}
			if (pc==5 || pc==1){
				if (pc==5){
					cout<<"ganaste, pc saco spock"<<endl;
				}
				if (pc==1){
					cout<<"ganaste, pc saco piedra"<<endl;
				}
				punto++;
			}
			if (pc==3 || pc==4){
				if (pc==3){
					cout<<"perdiste, pc saco tijera"<<endl;
				}
				if (pc==4){
					cout<<"ganaste, pc saco lagarto"<<endl;
				}
				puntopc++;
			}
		
			break;
		case 3:
			if (pc==m) {
				cout<<"empate, pc saco tijeras"<<endl;
			}
			if (pc==4 || pc==2){
				if (pc==4){
					cout<<"ganaste, pc saco lagarto "<<endl;
				}
				if (pc==2){
					cout<<"ganaste, pc saco papel"<<endl;
				}
				punto++;
			}
			if (pc==5 || pc==1){
				if (pc==5){
					cout<<"perdiste, pc saco spock"<<endl;
				}
				if (pc==1){
					cout<<"ganaste, pc saco piedra"<<endl;
				}
				puntopc++;
			}
			break;
		case 4:
			if (pc==m) {
				cout<<"empate, pc saco lagarto"<<endl;
			}
			if (pc==5 || pc==2){
				if (pc==5){
					cout<<"ganaste, pc saco spock"<<endl;
				}
				if (pc==2){
					cout<<"ganaste, pc saco papel"<<endl;
				}
				punto++;
			}
			if (pc==1 || pc==3){
				if (pc==1){
					cout<<"perdiste, pc saco piedra"<<endl;
				}
				if (pc==3){
					cout<<"ganaste, pc saco tijeras"<<endl;
				}
				puntopc++;
			}
			break;
		case 5:
			if (pc==m) {
				cout<<"empate, pc saco spock"<<endl;
			}
			if (pc==1 || pc==3){
				if (pc==3){
					cout<<"ganaste, pc saco tijeras"<<endl;
				}
			if (pc==1){
				cout<<"ganaste, pc saco piedra"<<endl;
				}
				punto++;
			}
			if (pc==4 || pc==2){
				if (pc==2){
					cout<<"perdiste, pc saco papel"<<endl;
				}
				if (pc==4){
					cout<<"ganaste, pc saco lagarto"<<endl;
				}
				puntopc++;
			}
			break;
		}
	}
	if(punto<puntopc){
		cout<<"you lost "<<endl;
	}
	if (punto>puntopc){
		cout<<"winner"<<endl;
	}
	if (punto==puntopc){
		cout<<"empate"<<endl;
	}
	return 0;
}

