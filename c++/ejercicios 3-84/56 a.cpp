#include <iostream>
using namespace std;

int main() {
	int n,conta1,conta2;
	cout<<"ingrese numero "<<endl;
	cin>>n;
	
	while (n!=0) {
		if (n>0){
			conta1++;
		}
		if (n<0){
			conta2++;
		}
		cout<<"ingrese numero o coloque 0 para salir"<<endl;
		cin>>n;
	}
	if (conta1>conta2)
		cout<<"se ingreso mas numeros positivos"<<endl;
	if (conta2>conta1)
		cout<<"se ingreso mas numeros negativos"<<endl;
	return 0;
}

