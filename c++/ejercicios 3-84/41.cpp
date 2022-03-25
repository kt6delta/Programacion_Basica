#include <iostream>
using namespace std;

int main() {
	cout<<"coloque el tiempo; en microsegundos(1s/1x10^6) que se demoro en ir y regresar del espejo"<<endl;
	float d,t;
	cin>>t;
	d=229.708*t;
	cout<<"la distancia recorrida es de "<<d<<" m"<<endl;
	
	return 0;
}

