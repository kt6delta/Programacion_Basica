#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"ingresar numero entero"<<endl;
	cin>>n;
	
	while (n!=0){
		if (n%2==0)
			cout<<2<<", ";
		if (n%3==0)
			cout<<3<<", ";
		if (n%5==0)
			cout<<5<<", ";
		if (n%7==0)
			cout<<7<<", ";
		if (n%11==0)
			cout<<11<<", ";
		if (n%13==0)
			cout<<13<<", ";
		cin>>n;
	}
	return 0;
}

