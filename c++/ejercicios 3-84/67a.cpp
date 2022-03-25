#include <iostream>
using namespace std;

int main() {
	int i,j;
	cout<<"cantidad de digitos"<<endl;
	cin>>i;
	char Numero[6],Numero_alreves[6];
	
	cout<<"igresar numero para determinar si es palidromo"<<endl;
	
	j=i-1;
	for (int n=0;n<i;n++) {
		cin>>Numero[n];
		Numero_alreves[j]=Numero[n];
		j--;
	}

	int conta=0;
	for (int n=0;n<i;n++){
		if (Numero[n]==Numero_alreves[n])
			conta++;
	}
	
	if (conta==i)
		cout<<"es plidromo"<<endl;
	else 
		cout<<"No es plidromo"<<endl;
	
	return 0;
}

