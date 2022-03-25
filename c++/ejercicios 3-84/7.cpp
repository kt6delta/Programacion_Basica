#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"numeros a simplificar"<<endl;
	cin>>a>>b;
	
	while ( (a%2==0) && (b%2==0) ) {
		a=a/2;
		b=b/2;
		cout<<"simplificado "<<a<<"/"<<b<<endl;
	}
	while ( (a%3==0) && (b%3==0) ) {
		a=a/3;
		b=b/3;
		cout<<"simplificado "<<a<<"/"<<b<<endl;
	}
	if (a%b==0) {
		cout<<"simplificado "<<a<<"/"<<b<<endl;
	}
	else {
		cout<<"simplificado "<<a<<"/"<<b<<endl;
	}
	return 0;
}

