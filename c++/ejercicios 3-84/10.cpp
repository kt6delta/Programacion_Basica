#include <iostream>
using namespace std;

int main() {
	cout<<"valor de la base para construir piramide"<<endl;
	int a,b,n,conta;
	cin>>n;
	a=0;
	b=0;
	
	
	while (a!=n-1) {
		conta=0;
		while (conta<a ){
			cout<<"*";
			conta++;
		}
		cout<<"*"<<endl;
		a++;
	}	
	while (b!=n){
		conta=n-1;
		while (conta>b ){
			cout<<"*";
			conta--;
		}
		cout<<"*"<<endl;
		b++;
	}

	
	return 0;
}

