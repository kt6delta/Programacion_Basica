#include <iostream>
using namespace std;

int main() {
	int n,a,j,c,d;
	cout<<"ingrese numero primo entero"<<endl;
	cin>>n;
	while (n<1 || n>23) {
		cout<<"entre 1 y 23"<<endl; 
		cin>>n;	
	}
	for (j=1;j<5 && c!=0 && d!=0;j++) {
		c=n%((6*j)+1);
		d=n%((6*j)-1);
		a=j;
	}

	if (a>=4 && (n<1 || n>3)) { 
		cout<<"no es primo"<<endl;
	}
	else {
		if ((n>=1 && n<=2)) {
			cout<<"siguiente primo "<<n+1<<endl;
		}
		else {
			if ((6*a)-1==n) 
				cout<<"siguiente primo "<<(6*a)+1<<endl;
			else 
				cout<<"siguiente primo "<<(6*(a+1))-1<<endl;
		}
	}
	return 0;
}

