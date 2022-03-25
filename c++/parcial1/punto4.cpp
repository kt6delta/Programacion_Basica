#include <iostream>

using namespace std;

int main() {
	cout<<"indicar el dia, mes y año"<<endl;
	int a,b,c,d;
	cin>>a>>b>>c;
	d= c%4;

	while ( ( (a>28 && b==2 && (d!=0 || c%100==0) && c%400!=0 ) ) || (a>29 && b==2 && ( (d==0 && c%100!=0) || c%400==0 ) ) ) {
		cout<<"coloque otro dia mas pequeño"<<endl;
		cin>>a;		
	}
	while ( a>31 || a<1 || b<1 || b>12) {
		cout<<"coloque otro mes"<<endl;
		cin>>b;			
	}
	
	
	if (a==30 && (b==4 || b==6 || b==9 || b==11) ) {
		a=1;
		b++;
		cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
	}
	if ( (a==31) && (b==1 || b==3 || b==5 || b==7 || b==8 || b==10) )  {
		a=1;
		b++;
		cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
	}
	if ( (a<30) && (b==4 || b==6 || b==9 || b==11) ) {
		a++;
		cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
	}
	
	if ( (a<31) && (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) ) {
		a++;
		cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
	}
	if (a==31 && b==12) {
		a=1;
		b=1;	
		c++;
		cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
	}
	
	if ( (d!=0 || c%100==0) && (c%400!=0) ) {
		if (a<28 && b==2) {
			a++;
			cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
		}
		if(a==28 && b==2) {
			a=1;
			b++;
			cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
		}
	}	
	if ( (d==0 && c%100!=0) || (c%400==0)) {
		if ( a<29 && b==2) {
			a++;
			cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
		}
		if(a==29 && b==2) {
			a=1;
			b++;
			cout<<a<<"/"<<b<<"/"<<c<<"es el dia siguiente"<<endl;
		}
	}
 return 0;
}
