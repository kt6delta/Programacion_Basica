#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num,a,b,c,d;
	float a_1,b_1,c_1,decima;
	
	cout<<"ingresar numero"<<endl;
	cin>>num;
	do {
		while (1000>=num || num>9999){
			cout<<"debe tener 4 digitos"<<endl;
			cin>>num;
		}
		a_1=num*pow (10,-3);
		a=a_1; //1er diguito
		decima=a_1-a;
		b_1=decima*10;
		b=b_1; //2do digito
		decima=b_1-b;
		c_1=decima*10;
		c=c_1; //3er digito
		decima=c_1-c+0.01;
		d=(decima*10);
		
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<"no se repiten numeros"<<endl;
		}
		else {
			cout<<"hay numeros repetidos"<<endl;
			cin>>num;
		}	
	} while (!(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d));
	
	return 0;
}

