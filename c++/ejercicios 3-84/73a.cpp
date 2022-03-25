#include <iostream>
using namespace std;

int main() {
	int a,Numero[100],n=0,mod;
	cout<<"numero para convertir a binario"<<endl;
	cin>>a;
	
	do{
		mod=a%2;
		Numero[n]=mod;
		n++;
		a=a/2;
	}while (a/2!=0);
	mod=a%2;
	Numero[n]=mod;
	
	for (int i=n;i>-1;i--){
		cout<<Numero[i];
	}

	return 0;
}

