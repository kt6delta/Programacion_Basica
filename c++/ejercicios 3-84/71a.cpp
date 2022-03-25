#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout<<"ingrese m y n, para hallar m mod n"<<endl;
	cin>>m;
	cin>>n;
	cout<<m-((m/n)*n)<<endl;
	return 0;
}

