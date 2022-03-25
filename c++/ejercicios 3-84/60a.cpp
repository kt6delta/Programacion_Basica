#include <iostream>
using namespace std;

int main() {
	int num,p,n,a,b;
	cout<<"ingrese numero primo a dividir por su siguiente primo"<<endl;
	cin>>num;
	
	
	n=1;
	b=7;
	do {
		a=(6*n)-1;
		p=a;
		if (p%5==0 && p!=5)
			p=1;
		cout<<"primo a= "<<p<<endl;
		if (b<num) {
			b=(6*n)+1;
			p=b;
			if (p%5==0)
				p=1;
			cout<<"primo b= "<<p<<endl;
		}
		n++;
	} while ((a<=num && b<=num) || p==1);
	
	if (num==1 || num==2){
		p=num+1;
	}
	float c=num;
	float e=  c/ p;
	cout<<"la division entre el primo siguiente es "<<e<<endl;
	
	return 0;
}

