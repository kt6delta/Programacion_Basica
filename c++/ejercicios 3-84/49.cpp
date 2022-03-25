#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout<<"numero decimal"<<endl;
	float d;
	cin>>d;
	cout<<"indique posicion del numero decimal (el 1 significaria el numero siguiente a la coma) "<<endl;
	int n;
	cin>>n;
	
	int d2=d*pow (10,n);
	int d3=d*pow (10,n-1);
	d3=d3*10;
	d3=d2-d3;
	cout<<"el decimal de esa posicion tiene un valor de "<<d3<<endl;
	return 0;
}

