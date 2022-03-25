#include <iostream>
using namespace std;

int main() {
	
	int POSICION [3],i;
	
	for ( i=0;i<3;i++){
		cout<<"numero con el cual llena array"<<endl;
		cin>>POSICION[i];
	}
	for ( i=0;i<3;i++){
		cout<<i<<"->"<<POSICION[i]<<endl;
	}
	return 0;
}

