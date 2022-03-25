#include <iostream>
using namespace std;

int main() {
	int h,m,s;
	cout<<"ingresar hora/minutos/segundos en formato 12H"<<endl;
	cin>>h>>m>>s;	
	if (h>12 || m>59 || s>59){
		cout<<"hora invalida "<<endl;
	}
	else {
	cout<<"hora valida"<<endl;	
}
	return 0;
}

