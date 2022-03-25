#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <math.h>
using namespace std;

int main() {
	int num,a,b,c,d;
	float a_1,b_1,c_1,decima;
	
	srand(time(NULL));
	do {
		num = 1000 + rand() % (9999);
		
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
	} while (!(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d && num>999 && num<=9999) );
	cout<<"numero al azar con 4 digitos y sin repetir numeros "<<num<<endl;
	
	return 0;
}
