#include <iostream>

using namespace std;

int main() {
	
	char POSICION [3];
	int i;
	cout<<"numero que se pasara a Romano desde el 001 hasta el 999"<<endl;
	for ( i=0;i<3;i++){
	cin>>POSICION[i];
	}
	
	if (POSICION [0]=='1')
		cout<<"C";
	if (POSICION [0]=='2')
		cout<<"CC";
	if (POSICION [0]=='3')
		cout<<"CCC";
	if (POSICION [0]=='4')
		cout<<"CD";
	if (POSICION [0]=='5')
		cout<<"D";
	if (POSICION [0]=='6')
		cout<<"DC";
	if (POSICION [0]=='7')
		cout<<"DCC";
	if (POSICION [0]=='8')
		cout<<"DCCC";
	if (POSICION [0]=='9')
		cout<<"CM";
	
	
	if (POSICION [1]=='1')
		cout<<"X";
	if (POSICION [1]=='2')
		cout<<"XX";
	if (POSICION [1]=='3')
		cout<<"XXX";
	if (POSICION [1]=='4')
		cout<<"XL";
	if (POSICION [1]=='5')
		cout<<"L";
	if (POSICION [1]=='6')
		cout<<"LX";
	if (POSICION [1]=='7')
		cout<<"LXX";
	if (POSICION [1]=='8')
		cout<<"LXXX";
	if (POSICION [1]=='9')
		cout<<"XC";
	
	if (POSICION [2]=='1')
		cout<<"I";
	if (POSICION [2]=='2')
		cout<<"II";
	if (POSICION [2]=='3')
		cout<<"III";
	if (POSICION [2]=='4')
		cout<<"IV";
	if (POSICION [2]=='5')
		cout<<"V";
	if (POSICION [2]=='6')
		cout<<"VI";
	if (POSICION [2]=='7')
		cout<<"VI";
	if (POSICION [2]=='8')
		cout<<"VIII";
	if (POSICION [2]=='9')
		cout<<"IX";
	
	return 0;
}

