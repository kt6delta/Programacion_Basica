#include <iostream>
using namespace std;

int main() {
	float a;
	cin>>a;
	int b;
	
	a=a*100;
	int c= int (a);	
	
	if (a-c>0.5)
		c=c+1;
	
	b=100;
	cout<<"presicion de 2 decimales"<<endl;
	
	while (c%2==0 && b%2==0) {
		c=c/2;
		b=b/2;
	}
	while (c%3==0 && b%3==0) {
		c=c/3;
		b=b/3;
	}
	cout<<c<<"/"<<b<<endl;
	
	return 0;
}

