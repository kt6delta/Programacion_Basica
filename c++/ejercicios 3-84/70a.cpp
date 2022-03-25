#include <iostream>
using namespace std;

int main() {
	int a,b=0,n=2,conta=0;
	cout<<"ingresar numero y se dira si es libre de cuadrados"<<endl;
	cin>>a;

	while (b<a){
		b=n*n;
		if (a%b==0)
			conta++;
		n++;
	}
	if (conta>0)
		cout<<"No esta libre de cuadrados"<<endl;
	else
		cout<<"Esta libre de cuadrados"<<endl;
	return 0;
}

