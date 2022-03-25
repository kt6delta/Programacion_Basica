#include <iostream>

using namespace std;

int main() {
	
	cout<<"entre 1 y 23"<<endl;
	int a,b,n,cont;
	cin>>a>>b;
	while ((a<1 && a>23) || (b<1 && b>23)){
		cin>>a>>b;
	}
	n=1;
	cont=0;
	
	if (a<b) {
		while (a<b+1) {
			if ((a%2==0 || a%3==0 || a%5==0) &&  !( (a% (6*n+1)==0 || a% (a*(n+1)-1)==0) )) {
				cont=cont+1;
			}
			n=n+1;
			a=a+1;
		}
	}
	else {
		while (b<a+1) {
			if ((b%2==0 || b%3==0 || b%5==0) &&  !( (b% (6*n+1)==0 || b% (b*(n+1)-1)==0) )) {
				cont=cont+1;
			}
			n=n+1;
			b=b+1;
		}
	}
	
	cout<<"numeros de feos "<<cont;
	return 0;
}

