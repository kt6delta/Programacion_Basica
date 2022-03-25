#include <iostream>
using namespace std;

int main() {
	float m,I,h;
	cout<<"peso KG"<<endl;
	cin>>m;
	cout<<"altura M o CM"<<endl;
	cin>>h;
	
	if (h>2)
		h=h/100;
		
	I= m/(h*h);
	cout<<"resultado sistema metrico "<<I<<endl;
	
	if (I<18.5)
		cout<<"peso inferior al normal"<<endl;
	if (18.5<=I && I<=24.9)
		cout<<"peso normal"<<endl;
	if (I>25 && I<=29.9)
		cout<<"peso superior a lo normal"<<endl;
	if (I>30)
		cout<<"obesidad"<<endl;
	return 0;
}

