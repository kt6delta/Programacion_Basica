#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int x1,x2,x3,x4,y1,y2,y3,y4,x1d,y1d,x2d,y2d,i,j,i2,j2,A;
	
	cout<<"1er cuadrado"<<endl<<"ingresar punto de lado superior izquierdo"<<endl;
	cin>>x1>>y1;
	cout<<"ingresar punto de lado inferior derecho"<<endl;
	cin>>x2>>y2;
	
	cout<<"2do cuadrado"<<endl<<"ingresar punto de lado superior izquierdo"<<endl;
	cin>>x3>>y3;
	cout<<"ingresar punto de lado inferior derecho"<<endl;
	cin>>x4>>y4; 
	
	x1d=abs(x1-x2);
	y1d=abs(y1-y2);
	
	
	x2d=abs(x3-x4);
	y2d=abs(y3-y4);
	
	while (x1d!=y1d ){
		cout<<"no es cuadrado"<<endl;
		cout<<"1er cuadrado"<<endl<<"ingresar punto de lado superior izquierdo"<<endl;
		cin>>x1>>y1;
		cout<<"ingresar punto de lado inferior derecho"<<endl;
		cin>>x2>>y2;
	}
	while ( x2d!=y2d){
		cout<<"no es cuadrado"<<endl;
		cout<<"2do cuadrado"<<endl<<"ingresar punto de lado superior izquierdo"<<endl;
		cin>>x3>>y3;
		cout<<"ingresar punto de lado inferior derecho"<<endl;
		cin>>x4>>y4; 
	}
	
	
	
	if ( x1>x3 && y1>y3 ) { // arriba a la derecha esta el 1er cuadrado 
		i=y1;
		while (i!=y3 && i!=y2){
			i--;
		}
		j=y4;
		while (j!=y2 && j!=y3){ 
			j++;
		}
		i2=x1;
		while (i2!=x4 && i2!=x2){ 
			i2++;
		}
		j2=x4;
		while (j2!=x1 && j2!=x3){ 
			j2--;
		}
		if ( ((i==y3) && (j==y2)) || ((i2==x4) && (j2==x1)) ){
			A=abs(i2-j2)*abs(i-j);
			if (A!=0)
				cout<<"el area de la interseccion entre los cuadrados es "<<A<<endl;
			else
				cout<<"no coinciden"<<endl;
		}
		else
			cout<<"no coinciden"<<endl;
	}	
	if (y1==y3 || x1==x3) //si solo se tocane los extremos
		cout<<"coinciden solo los extremos, no tienen area"<<endl;
	
	if ( x1<x3 && y1>y3 ) { // arriba a la izquierda esta el 1er cuadrado y el primero contiene al segundo 
		i=y1;
		while (i!=y3 && i!=y2){
			i--;
		}
		j=y4;
		while (j!=y2 && j!=y3){ 
			j++;
		}
		i2=x1;
		while (i2!=x3 && i2!=x2){ 
			i2++;
		}
		j2=x4;
		while (j2!=x2 && j2!=x3){ 
			j2--;
		}
		if ( ((i==y3) && (j==y2)) || ((i2==x3) && (j2==x2)) ){
			A=abs(i2-j2)*abs(i-j);
			if (A!=0)
				cout<<"el area de la interseccion entre los cuadrados es "<<A<<endl;
			else
				cout<<"no coinciden XD"<<endl;
		}
		else
			cout<<"no coinciden XD"<<endl;
	}	
	
	
	if ( x1>x3 && y1<y3 ) { // abajo a la derecha esta el 1er cuadrado 
		i=y1;
		while (i!=y4 && i!=y2){
			i--;
		}
		j=y4;
		while (j!=y1 && j!=y3){ 
			j++;
		}
		i2=x1;
		while (i2!=x4 && i2!=x2){ 
			i2++;
		}
		j2=x4;
		while (j2!=x1 && j2!=x3){ 
			j2--;
		}
		if ( ((i==y4) && (j==y1)) || ((i2==x4) && (j2==x1)) ){
			A=abs(i2-j2)*abs(i-j);
			if (A!=0)
				cout<<"el area de la interseccion entre los cuadrados es "<<A<<endl;
			else
				cout<<"no coinciden"<<endl;
		}
		else
			cout<<"no coinciden"<<endl;
	}	
	if ( x1<x3 && y1<y3 ) { // abajo a la izquierda esta el 1er cuadrado 
		i=y3;
		while (i!=y1 && i!=y4){
			i--;
		}
		j=y2;
		while (j!=y4 && j!=y1){ 
			j++;
		}
		i2=x1;
		while (i2!=x3 && i2!=x2){ 
			i2++;
		}
		j2=x4;
		while (j2!=x2 && j2!=x3){ 
			j2--;
		}
		if ( ((i==y1) && (j==y4)) || ((i2==x3) && (j2==x2)) ){
			A=abs(i2-j2)*abs(i-j);
			if (A!=0)
				cout<<"el area de la interseccion entre los cuadrados es "<<A<<endl;
			else
				cout<<"no coinciden"<<endl;
		}
		else
			cout<<"no coinciden"<<endl;
	}	
	return 0;
}

