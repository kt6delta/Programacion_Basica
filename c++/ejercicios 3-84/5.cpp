#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int i,l;
	i=0;
	cout<<"# de casos"<<endl;
	cin>>l;
	while (l!=i) 
	{
		cout<<"decimales de presicion"<<endl;
		int n;
		float a;
		cin>>n;
		cout<<"numero decimal"<<endl;
		cin>>a;
		cout<<fixed<<setprecision(n)<<a<<endl;
		i++;
	}
return 0;
}

