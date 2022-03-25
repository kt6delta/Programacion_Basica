#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;

int main() {
	
	int h,k,x,y,r;
	cout<<"ingresar el centro del circulo"<<endl;
	cin>>h>>k;
	
	cout<<"ingresar radio"<<endl;
	cin>>r;
	
	cout<<"punto a examinar"<<endl;
	cin>>x>>y;
	
	if (pow(x-h,2)+ pow(y-k,2)<=r*r)
		cout<<"el punto "<<h<<","<<k<<" esta dentro de la circunferencia"<<endl;
	else 
		cout<<"el punto "<<h<<","<<k<<" no esta dentro de la circunferencia"<<endl;
	return 0;
}

