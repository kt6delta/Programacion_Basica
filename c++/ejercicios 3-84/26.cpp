#include <iostream>
using namespace std;

int main() {
	
	cout<<"indicar el dia, mes y año"<<endl;
	int a,b,c,d;
	bool e;
	cin>>a>>b>>c;
	d= c%4;
	
	e= ( (a>28 && b==2 && (d!=0 || c%100==0) && c%400!=0 ) ) || (a>29 && b==2 && ( (d==0 && c%100!=0) || c%400==0 ) ); 
	
	if (e==true || ( a>31 || a<1 || b<1 || b>12) ) {
		if ( ( (a>28 && b==2 && (d!=0 || c%100==0) && c%400!=0 ) ) || (a>29 && b==2 && ( (d==0 && c%100!=0) || c%400==0 ) ) ) {
			cout<<"fecha no valida"<<endl;
		}
		if ( a>31 || a<1 || b<1 || b>12) {
			cout<<"fecha no valida"<<endl;		
		}
	}
	else {
		cout<<"fecha valida"<<endl;
	}
	return 0;
}

