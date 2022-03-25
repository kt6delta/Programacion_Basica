#include <iostream>
#include <stdlib.h>
#define PI 3.1416
using namespace std;

int main() {
	
	int r,x1,y1,x2,y2;
	float A1,A2;
	
	cout<<"radio del circulo"<<endl;
	cin>>r;
	cout<<"punto superior izquierdo del cuadrado"<<endl;
	cin>>x1>>y1;
	cout<<" punto inferior derecho del cuadrado"<<endl;
	cin>>x2>>y2;
	while (abs(x1-x2)!=abs(y1-y2)){
		cout<<"no es cuadrado"<<endl;
	}
	
	A1=2*PI*r;
	A2=4*abs(x1-x2);
	cout<<"la diferencia de perimetro es "<<A1-A2<<endl;
	return 0;
}

