#include <iostream>

using namespace std;
	main(){
		int a,b,n,i,c,d,cont;
		
		cout<<"coloque dos numeros entre 1 y 23.\no 0 y 0 para salir"<<endl;
		cin>>a>>b;
		
		while (a!=0 || b!=0) {
			while ( !(a>=1 && a<=23) || !(b>=1 && b<=23)) {
			cout<<"un rango de numeros entre 1 y 23"<<endl;
			cin>>a>>b;
			}
			n=1;
			i=1;
			if (b>a) {
				while (b>=6*n-1) {
					c=6*n-1;
					n++;
				}
				n--;
				while (b>=6*i+1) {
					d=6*i+1;
					i++;
				}
				i--;
				switch (a) {
					case 1:
					cont=3;
					cout<<"la cantidad de impares es "<<n+i+cont<<endl;
					break;
				case 2:
					cont=2;
					cout<<"la cantidad de impares es "<<n+i+cont<<endl;
					break;
					case 3:
					cont=1;
					cout<<"la cantidad de impares es "<<n+i+cont<<endl;
					break;
				default:
					cont=0;
					cout<<"la cantidad de impares es "<<n+i+cont<<endl;
				};
			}
			else {
				while (a>=6*n-1) {
					c=6*n-1;
					n=n+1;
				}
				n--;
				while (a>=6*i+1) {
					d=6*i+1;
					i++;
				}
				i--;
				switch (b) {
					case 1:
						cont=3;
						cout<<"la cantidad de impares es "<<n+i+cont<<endl;
						break;
					case 2:
						cont=2;
						cout<<"la cantidad de impares es "<<n+i+cont<<endl;
						break;
					case 3:
						cont=1;
						cout<<"la cantidad de impares es "<<n+i+cont<<endl;
						break;
					default:
						cont=0;
						cout<<"la cantidad de impares es "<<n+i+cont<<endl;
				};
			}
		cin>>a>>b;
		}
		return 0;
	}
