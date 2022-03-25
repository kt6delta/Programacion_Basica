#include <iostream>
using namespace std;

int main() {
	
	int a,b,c,d,e;
	
	cout<<"ingresar intervalo para decir cantidad de numeros perfectos"<<endl;
	cin>>c>>e; //c-fin, e-comienzo
	d=0;
	
	for (int j=e;j<c+1;j++){
		e=j;
		b=0;
		for (int i=1;i<e;i++){
			a= e%i;
			if (a==0){
				a=i+b;
				b=a;
			}
			if ( a==e){
				cout<<a<<" es numero perfecto"<<endl;
				d++;
			}
		}
	}
	cout<<"cantidad de numeros perfectos "<<d<<endl;
	return 0;
}

