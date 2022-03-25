#include <iostream>
using namespace std;

int main() {
	int a,b=0,i=1,n=2,c;
	do {
		cout<<"colocar numero oblongo, x*(x+1) "<<endl;
		cin>>a;
		while (b<a){
			b=i*n;
			i++;
			n++;
		}
	}while(b!=a);
	c=(i+1)*(n+1);
	cout<<"el siguiente oblongo es "<<c<<endl;
	
	
	return 0;
}

