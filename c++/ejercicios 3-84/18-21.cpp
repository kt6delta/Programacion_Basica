#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main() {
	int x,y,z,x2,y2,z2;
	float alfa,d,V;
	cout<<"ingrese 1er punto"<<endl;
	cin>>x>>y>>z;
	cout<<"ingrese 2do punto"<<endl;
	cin>>x2>>y2>>z2;
	
	d= (x-x2)*(x-x2)+(y-y2)*(y-y2)+(z-z2)*(z-z2);
	cout<<"la distancia es "<<pow(d,0.5)<<endl;
	
	alfa= acos ( (z-z2)/pow(d,0.5) )*(180/PI);
	cout<<"el angulo entre el vector y el eje z es "<<alfa<<endl;	
	

	V=(4*PI*d*pow(d,0.5)/3);
	cout<<"el volumen de la esfera con radio "<<pow(d,0.5)<<" es "<<V<<endl;
	
	return 0;
}

