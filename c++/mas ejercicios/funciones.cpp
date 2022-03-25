#include <iostream>
using namespace std;

int cuadrado(int x) {
	x=x*x;
	return x;
}
int cubo(int x) {
	x=x*x*x;
	return x;
}
int main() {
	int n;
	cin>>n;
	cuadrado (n);
	cubo(n);
	cout<<cuadrado (n)<<", "<<cubo(n)<<endl;
	return 0;
}

