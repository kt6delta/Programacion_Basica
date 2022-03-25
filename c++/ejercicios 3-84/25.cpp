#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	long  num1,num2,num3,num4,num5,num6;
	int dado2,dado,a;
	a=0;
	num1=0;
	num2=0;
	num3=0;
	num4=0;
	num5=0;
	num6=0;
	
	cout<<"estadisticamente todos los numeros tienen la misma posibilidad de salir al lanzar dos dados: 1/36"<<endl;
	
	for(a=0;a!=5;a++) {
		
		dado = 1 + rand() % (6); 
		dado2 = 1 + rand() % (6); 
		
		switch(dado){
		case 1:
			num1++;
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		case 2:
			num2++;
			
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		case 3:
			num3++;
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		case 4:
			num4++;
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		case 5:
			num5++;
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		case 6:
			num6++;
			if (dado2==1)
				num1++;
			if (dado2==2)
				num2++;
			if (dado2==3)
				num3++;
			if (dado2==4)
				num4++;
			if (dado2==5)
				num5++;
			if (dado2==6)
				num6++;
			break;
		}
	}
	cout<<"cantidad de veces que callo el 1  "<<num1<<endl;
	cout<<"cantidad de veces que callo el 2  "<<num2<<endl;
	cout<<"cantidad de veces que callo el 3  "<<num3<<endl;
	cout<<"cantidad de veces que callo el 4  "<<num4<<endl;
	cout<<"cantidad de veces que callo el 5  "<<num5<<endl;
	cout<<"cantidad de veces que callo el 6  "<<num6<<endl;
	
	
	if (num1>num2 && num1>num3 && num1>num4 && num1>num5 && num1>num6)
		cout<<"salio mas veces 1"<<endl;
	if (num2>num1 && num2>num3 && num2>num4 && num2>num5 && num2>num6)
		cout<<"salio mas veces 2"<<endl;
	if (num3>num1 && num3>num2 && num3>num4 && num3>num5 && num3>num6)
		cout<<"salio mas veces 3"<<endl;
	if (num4>num1 && num4>num2 && num4>num3 && num4>num5 && num4>num6)
		cout<<"salio mas veces 4"<<endl;	
	if (num5>num1 && num5>num2 && num5>num3 && num5>num4 && num5>num6)
		cout<<"salio mas veces 5"<<endl;
	if (num6>num1 && num6>num2 && num6>num3 && num6>num4 && num6>num5)
		cout<<"salio mas veces 6"<<endl;
	
	cout<<"# total de lanzamientos "<<num1+num2+num3+num4+num5+num6<<endl;
	return 0;
}

