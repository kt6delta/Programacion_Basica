#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	float a,b,c,d,t,z,m,n,y,x;
	cout<<"ingresar coeficientes de ax+bx+cx+dx"<<endl;
	cin>>a>>b>>c>>d;
	cout<<"ingresar exponentes x^y"<<endl;
	cin>>t>>z>>m>>n;
	cout<<"ingresar el valor de x"<<endl;
	cin>>x;
	
	y=t*a*pow(x,t-1)+z*b*pow(x,z-1)+m*c*pow(x,m-1)+n*d*pow(x,n-1);
	cout<<"la derivada es "<<y<<endl;
	
	

	return 0;
	
	
}

