#include <iostream>
using namespace std;

int main() {
	int x1,y1,x2,y2,x3,y3,m,x,y,a;
	cout<<"indique 2 puntos (los extremos de la linea)"<<endl;
	cin>>x1>>y1>>x2>>y2;
	cout<<"coloque un punto"<<endl;
	cin>>x3>>y3;
	
	m=(y1-y2)/(x1-x2);
	y=0;
	
	for (x=x1-0.1;( (x!=x3 || y!=y3) && x<x2) ;x++){
		y=m*(x-x1)+y1;
		a=x;
	}
	if (a==x3 && y==y3)
		cout<<a<<","<<y<<" hace parte de la recta"<<endl;
	else
		cout<<"el punto no hace parte de la recta"<<endl;
	
	return 0;
}

