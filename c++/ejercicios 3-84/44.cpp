#include <iostream>
using namespace std;

int main() {
	int n,a,b,i;
	cout<<"ingresar numero entero"<<endl;
	cin>>n;
	
	b=1;
	for ( i=1;!(b==n || b>n);i++){
		a=i*b;
		b=a;
	}
	if (b>n)
		cout<<n<<" no tiene factorial"<<endl;
	if (b==n)
		cout<<n<<" es factorial de "<<i-1<<endl;
	return 0;
}

