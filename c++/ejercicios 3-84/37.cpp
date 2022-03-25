#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a,b,c,i;
	
	cout<<"decir los extremos para empezar conteo"<<endl;
	cin>>a>>b;

	if (a<b){
		for (i=a+1;i<b+1;i++) {
			c=a;
			a=c+i;
		}
		cout<<"la suma de los enteros incluido extremos "<<a<<endl;
	}
	else{
		for (i=b+1;i<a+1;i++) {
			c=b;
			b=c+i;
		}
		cout<<"la suma de los enteros incluido extremos "<<b<<endl;
	}
	
	
	return 0;
}

