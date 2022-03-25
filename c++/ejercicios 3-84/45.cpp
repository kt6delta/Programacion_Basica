#include <iostream>

using namespace std;

int main() {
	
	double A,i,c,a,b;
	cout<<"indicar los extremos en una ecuacion y=x+10, entre -10 y 0"<<endl;
	cin>>a>>b;
	
	c=0;
	for (i=a;i<b;i=i+0.001){
		A=(((b-a)/1000)*(i+10))+c;
		c=A;
	}
	cout<<"el area aproximado de la recta es "<<A<<endl;
	return 0;
}

 
