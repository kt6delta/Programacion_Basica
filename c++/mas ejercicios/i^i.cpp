#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	double a,b=0;
	for (double i=1;i<n+1;i++){
		a=pow(i,i);
		b=b+a;
	}
	cout<<b;
	return 0;
}

//
