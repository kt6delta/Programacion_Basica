#include <iostream>
using namespace std;

int main() {
	int expo,base;
	cout<<"colocar el exponente"<<endl;
	cin>>expo;
	cout<<"indicar la base"<<endl;
	cin>>base;
	
	if (expo==0) 
		cout<<base<<"^"<<expo<<"= 0"<<endl;
	if (expo==1)
		cout<<base<<"^"<<expo<<"="<<base<<endl;
	
	float potencia;
	potencia=base;
	
	if (expo>0) {
		for (int i=2;i<=expo;i++){
			potencia=potencia*base;
		}
	}
	else {
		for (int i=2;i<=expo*-1;i++){
			potencia=potencia*base;
		}
		potencia=1/potencia;
	}
	cout<<base<<"^"<<expo<<"="<<potencia<<endl;	
	return 0;
}

