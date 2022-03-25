#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	float a,b,c,d;
	cout<<"ingrese 1er numero decimal"<<endl;
	cin>>a;
	cout<<"ingrese 2do numero decimal"<<endl;
	cin>>b;
	
	int e= a;
	c= a-e;
	e=b;
	d= b-e;
	
	cout<<"la diferencia de la parte decimal es "<<c-d<<endl;
	
	return 0;
}

