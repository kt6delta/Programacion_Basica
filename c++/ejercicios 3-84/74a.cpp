#include <iostream>
using namespace std;

int main() {
	int a,Numero[100],n=0,mod;
	cout<<"numero para convertir a octanal"<<endl;
	cin>>a;
	
	do{
		mod=a%8;
		Numero[n]=mod;
		n++;
		a=a/8;
	}while (a/8!=0);
	mod=a%8;
	Numero[n]=mod;
	
	for (int i=n;i>-1;i--){
		cout<<Numero[i];
	}
	
	return 0;
}

