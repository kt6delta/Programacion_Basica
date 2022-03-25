#include <iostream>

using namespace std;

int main() {
	cout<<"escribir un numeros y se dira el signo"<<endl;
	int n;
	cin>>n;
	while (n!=0) 
	{
		if (n>0) 
		{
			cout<<"+"<<endl;
			cin>>n;
		}
		else 
		{
			cout<<"-"<<endl;
			cin>>n;
		}
	}
	return 0;
}
