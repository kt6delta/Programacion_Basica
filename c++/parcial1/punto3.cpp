#include <iostream>
using namespace std;

int main() {
	int a, b, c, p;
	float d;
	
	cout<<"posicion de la serie"<<endl;
	cin>>p;
	
	while (p<1) 
	{
		cout<<"posicion positiva"<<endl;
		cin>>p;
	}
	
	if (p==1) 
		cout<<"promedio 0"<<endl; 
	
	if (p==2 || p==3) {
		cout<<"valor serir 1"<<endl;
		d=1/float(p);
		cout<<"promedio "<<d<<endl;
	}
	if (p>3) {
		a=0;
		b=1;
		for (int i=1; i<=p-2 ; i+=1) {
			c=a+b;
			a=b;
			b=c;
		}
		cout<<"valor serie "<<c<<endl;
		d=c/float(p);
		cout<<"promedio "<<d<<endl;
	}
	return 0;
}
