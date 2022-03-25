#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	
	double a,n;
	cout<<"ingresar numero entero"<<endl;
	cin>>n;
	
	a=cbrt(n);
	if (a*a*a==n)
		cout<<n<<" corresponde a un cubo perfecto"<<endl;
	else 
		cout<<n<<" NO corresponde a un cubo perfecto"<<endl;
	return 0;
}

