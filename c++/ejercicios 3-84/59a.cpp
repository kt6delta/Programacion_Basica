#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
	int r,h;
	cout<<"ingresar altura del cono"<<endl;
	cin>>h;
	cout<<"ingresar radio del cono"<<endl;
	cin>>r;
	h=(r*r*PI*h)/3;
	cout<<"el volumen es"<<h<<endl;
	return 0;
}

