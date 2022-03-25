#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

main () {
	int x,y,x2,y2,d;
	float expo,e,A;
	double m;
	cout<<"dar cordenadas del primer punto"<<endl;
	cin>>x>>y;
	cout<<"dar cordenadas del segundo punto"<<endl;
	cin>>x2>>y2;
	d=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	expo=0.5;
	cout<<"la distancia es "<<pow(d,expo)<<endl;
	if ( (x-x2==0)||(y==y2) ){
		if (x-x2==0){
		cout<<"la pendiente no se puede determinar"<<endl;
		}
		if (y==y2){
			e=(y-y2)/(x-x2);
		}
	}	
	else {
	e=y-y2/(x-x2);
	}
	cout<<"la pendiente es "<<e<<endl;
	if (x-x2==0){
		cout<<"el angulo respecto la horizontal es 90°"<<endl;
	}
	else {
	m= atan(e)*180/PI;
	cout<<"el angulo respecto la horizontal es "<<m<<endl;
	}
	A=PI*(d);
	cout<<"el area del circulo que se forma con la recta es de "<<A<<endl;
	return 0;
}

	
