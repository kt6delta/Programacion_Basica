#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float Cf, Ci, t, i;
	cout<<"interes anuales, en porciento"<<endl;
	cin>>i;
	i=i/100/12;
	cout<<"monto inicial, en pesos"<<endl;
	cin>>Ci;
	cout<<"numero de años"<<endl;
	cin>>t;
	
	Cf =Ci*pow (1+i,t*12);
	cout<<"monto final= "<<Cf<<endl;
	return 0;
}

