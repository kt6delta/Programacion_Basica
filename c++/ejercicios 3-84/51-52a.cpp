#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"ingrese numero positivo"<<endl;
	cin>>a;

	while (a!=0) {
	if (a%2==0){
		cout<<"la mitad de a es "<<a/2<<endl;
	}
	if (a%2!=0){
		cout<<"4 veces el valor de a es "<<a*4<<endl;
	}
	cin>>a;
	}
	return 0;
}

