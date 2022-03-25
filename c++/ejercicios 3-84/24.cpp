#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
	int pc,per,puntaje;
	srand(time(NULL));
	pc = 1 + rand() % (100);
	cout<<"adivine el numero entre 1 y 100"<<endl;
	cout<<pc<<endl;
	puntaje=0;
	
	while(pc!=per){
		cin>>per;
		if (pc<per){
			cout<<"el numero es menor"<<endl;
		}
		if (pc>per) {
			cout<<"el numero es mayor"<<endl;
		}
		puntaje++;
	}
	cout<<"adivinaste, tu puntaje es "<<puntaje<<endl;
	return 0;
}

