#include <iostream>
using namespace std;

int main() {
	int h,m,s,h2,m2,s2;
	cout<<"ingrese hora/minutos/segundo, formato 24H"<<endl;
	cin>>h>>m>>s;
	while ((h>24 || m>59 || s>59) || h<0 || m<0 || s<0){
		cout<<"hora no valida formato 24H"<<endl;
		cin>>h>>m>>s;
	}
	cout<<"ingrese otra hora/minuto/segundo"<<endl;
	cin>>h2>>m2>>s2;
	while (h>24 || m>59 || s>59 || h<0 || m<0 || s<0){
		cout<<"hora no valida formato 24H"<<endl;
		cin>>h2>>m2>>s2;
	}
	if (s==59 && s2<59){
		m=m+1;
		s=0;
		s2=s2+1;
	}
	
	if (s>s2)
		s=s-s2;
	else 
		s=s2-s;
	
	if (m>59){
		h=h+1;
		m=0;
	}
	if (m>m2)
		m=m-m2;
	else
		m=m2-m;
	if (h>h2)
		h=h-h2;
	else
		h=h2-h;
	
	cout<<"la diferencia es "<<endl;
	cout<<h<<"/"<<m<<"/"<<s;
	
	
	
	return 0;
}

