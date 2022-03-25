#include <iostream>
using namespace std;

int main() {
	cout<<"escribir los valores de resistencias conectadas en paralelo"<<endl;
	float R,a,b,c;
	cin>>a>>b>>c;
	R=(1/a)+(1/b)+(1/c);
	cout<<"la resistencia total es "<<R<<endl;
	return 0;
}

