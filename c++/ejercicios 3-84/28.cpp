#include <iostream>
using namespace std;

int main() {
	cout<<"hasta donde desea hacer factorial"<<endl;
	int n,b,a,c,d,e;
	cin>>n;
	
	e=0;
		
	for (c=0;c!=n+1;c++){
		
		b=1;
		for (a=1;a!=(n+1)-c;a++){
			b=a*b;
		}
		d=b+e;
		e=d;
	}	
	cout<<e<<endl;
	return 0;
}

