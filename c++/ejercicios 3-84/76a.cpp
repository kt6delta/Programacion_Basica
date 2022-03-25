#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	int d,x;
	long double c=0,b;
	cout<<"serie de maclaurin con f(x)=e^5x"<<endl<<"ingresar el valor de x"<<endl;
	cin>>x;
	cout<<"la cantidad de terminos que quiere sumar"<<endl;
	cin>>d;
	for (int n=0;n<d;n++){
		long long a=1;
		for (int i=2;i<=n;i++){
			a=a*i;
		}
		b=(pow(5,n)*pow(x,n)/a)+c;
		c=b;
	}
	cout<<"la sumatoria es "<<c<<endl;
	return 0;
}

