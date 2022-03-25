#include <iostream>
#include <conio.h>
using namespace std;
//funciones

int funcion_suma (float a_sum, float b_sum){
	int res=a_sum+b_sum;
	return res;
}
int funcion_resta (float a_rest, float b_rest){
	int res=a_rest-b_rest;
	return res;
}
int funcion_multiplica (float a_mult, float b_mult){
	int res=a_mult*b_mult;
	return res;
}
float funcion_divide (float a_divi, float b_divi){
	float res=a_divi/ b_divi;
	return res;
}

int main() {
	int menu;
	float a,b;
	cout<<"ingresar:\n1 para sumar\n2 para restar\n3 para multiplicar\n4 para dividir\n5 para salir"<<endl;
	getch();
	system("cls");
	cin>>menu;
	while (menu>5 || menu<1){
		cout<<"numero no valido"<<endl;
		cin>>menu;
	}
	while (menu>=1 && menu<5){
		switch (menu){
		case 1:
			cout<<"nuemros a sumar"<<endl;
			cin>>a>>b;
			funcion_suma ( a, b); //invocar la funcion_suma
			cout<<"suma="<<funcion_suma ( a, b)<<endl;
			getch();
			system("cls");
			break;
		case 2:
			cout<<"nuemros a restar"<<endl;
			cin>>a>>b;
			funcion_resta (a, b);//invocar la funcion_resta
			cout<<"resta="<<funcion_resta (a, b)<<endl;
			getch();
			system("cls");
			break;
		case 3:
			cout<<"nuemros a multiplicar"<<endl;
			cin>>a>>b;
			funcion_multiplica (a, b);//invocar la funcion_multiplica
			cout<<"multiplicacion="<<funcion_multiplica (a, b)<<endl;
			getch();
			system("cls");
			break;
		case 4:
			cout<<"nuemros a dividir"<<endl;
			cin>>a>>b;
			if (b!=0){
				funcion_divide (a, b);//invocar la funcion_divide
				cout<<"division="<<funcion_divide (a, b)<<endl;
			}
			else {
				cout<<"division por 0, no es valida"<<endl;
			}
			getch();
			system("cls");
			break;
		}
		cout<<"ingresar:\n1 para sumar\n2 para restar\n3 para multiplicar\n4 para dividir\n5 para salir"<<endl;
		getch();
		system("cls");
		cin>>menu;
	} 

	return 0;
}

