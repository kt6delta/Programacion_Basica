#include <iostream>
using namespace std;

int main() {
	
	char NUMERO[3];
	cout<<"ingrear un numero entre 001 y 100 "<<endl;
	
	for(int n=0;n<3;n++){
	cin>>NUMERO[n];
	}
	
	if (NUMERO[0]=='1')
		cout<<" centesimo ";
	
	if (NUMERO[1]=='1')
		cout<<" decimo ";
	if (NUMERO[1]=='2')
		cout<<" vigesimo ";
	if (NUMERO[1]=='3')
		cout<<" trigesimo ";
	if (NUMERO[1]=='4')
		cout<<" cuadragesimo ";
	if (NUMERO[1]=='5')
		cout<<" quincuagesimo ";
	if (NUMERO[1]=='6')
		cout<<" sexagesimo ";
	if (NUMERO[1]=='7')
		cout<<" septuagesimo ";
	if (NUMERO[1]=='8')
		cout<<" octogesimo ";
	if (NUMERO[1]=='9')
		cout<<" nonagesimo ";
	
	if (NUMERO[2]=='1')
		cout<<" primero ";
	if (NUMERO[2]=='2')
		cout<<" segundo ";
	if (  NUMERO[2]=='3')
		cout<<" tercero ";
	if (  NUMERO[2]=='4')	
		cout<<" cuarto ";
	if (  NUMERO[2]=='5')
		cout<<" quinto ";
	if (NUMERO[2]=='6')	
		cout<<" sexto ";
	if ( NUMERO[2]=='7')
		cout<<" septimo ";
	if ( NUMERO[2]=='8')
		cout<<" octavo ";
	if (NUMERO[2]=='9')
		cout<<" noveno ";
	
	
	
	return 0;
}

