#include <iostream>
using namespace std;

int main() {
	int a,b=0,i=1,n=2;
	cout<<"colocar un numero para determinar si es oblongo, x(x+1) "<<endl;
	cin>>a;

	while (b<a){
		b=i*n;
		i++;
		n++;
	}
	if (b==a)
		cout<<"es numero oblongo"<<endl;
	else 
		cout<<"No es numero oblongo"<<endl;
	return 0;
}

