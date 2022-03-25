#include <iostream>
using namespace std;

int main() {
	int a;
	float b,c,d;
	cout<<"cantidad de numeros a sumar "<<endl;
	cin>>a;
	c=0;
	for (int n=0; n!=a; n++) {
		cout<<"numero a sumar"<<endl;
		cin>>b;
		d=b+c;
		c=d;
	}
	cout<<"el promedio es "<<d/a<<endl;
	return 0;
}

