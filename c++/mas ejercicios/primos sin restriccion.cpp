#include <iostream>
using namespace std;

int main() {
	int num,p,n,a,b,c,d;
	cout<<"hasta donde quiere evaluar primo"<<endl;
	cin>>num;
	
	a=1;
	n=1;
	while (a<num || b<num){
		a=(6*n)-1;
		p=a;
		c=6*p-p;
		if (p%5==0 && p!=5 )
			p=1;
		cout<<"primos "<<p<<endl;
		if (b<num) {
			b=(6*n)+1;
			p=b;
			d=6*p+p;
			if (p%5==0)
				p=1;
			cout<<"primos "<<p<<endl;
		}
		n++;
	}	
	
	return 0;
}

