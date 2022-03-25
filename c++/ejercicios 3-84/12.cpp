#include <iostream>
using namespace std;

int main() {
	
	float a,b,c;
	cout<<"lados del triangulo,cateto a, cateto b e hipotenusa"<<endl;
	cin>>a>>b>>c;
	if ((a+b>c && b+c>a && a+c>b) || a==b==c)
		cout<<"se puede construir triangulo";
	else
		cout<<"NO se puede construir";
	return 0;
}

