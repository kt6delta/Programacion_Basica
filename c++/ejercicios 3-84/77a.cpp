#include <iostream>
using namespace std;

int main() {
	
	int POSICION [100], n, Num_impar=0; 
	cout<<"indique cantidad de numeros"<<endl;
	cin>>n;
	cout<<"coloque un numero"<<endl;
	cin>>POSICION[0];
	
	for ( int i=1;i<n-1;i++){ 
		cout<<"coloque un numero menor que el anterior"<<endl;
		cin>>POSICION[i];
		
		if (POSICION[0]<=POSICION[i]) {
			while (POSICION[0]<=POSICION[i]) {
				cout<<":V ...No"<<endl;
				cin>>POSICION[i];
			}
		}
		i++;
		do {
			if (i<=n) {
				cout<<"coloque un numero menor que el anterior"<<endl;
				cin>>POSICION[i];
			}
		} while (POSICION[i-1]<=POSICION[i]);
	}
	cout<<"numeros leidos= ";
	for (int i=0;i<n;i++){
		cout<<POSICION[i]<<" ,";
		if (POSICION[i]%2 !=0){
			Num_impar++;
		}
	}
	cout<<"\nNumero de impares "<<Num_impar;
	return 0;
}
