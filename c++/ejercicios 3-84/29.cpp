#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;

int main() {
	float alfa,h;
	int l;
	cout<<"ingresar largo de la sombra del edificio"<<endl;
	cin>>l;
	cout<<"ingresar angulo entre sombra y la horizontal"<<endl;
	cin>>alfa;
	h=l*tan(alfa*PI/180);
	cout<<"la altura del edificio es "<<h<<endl;
	return 0;
}

