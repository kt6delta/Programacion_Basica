#include <iostream>
using namespace std;

int main() {
	int a=0;
	cout<<"0";
	for (int i=1;i<11;i++){
		a=i+a;
		cout<<"+"<<i;
	}
	cout<<"="<<a;
	return 0;
}

