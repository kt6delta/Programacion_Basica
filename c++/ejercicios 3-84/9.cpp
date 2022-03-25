#include <iostream>
using namespace std;

int main() {
	float a,b,c,d;
	int i,n;
	cout<<"casos"<<endl;
	cin>>n;
	i=0;
	
	while (i!=n) {
		cout<<"numeros a evaluar"<<endl;
		cin>>a>>b>>c;
		
		if (a==b || b==c || (a==b && b==c)){
			cout<<"mediana "<<b<<endl;
		}
		if  (b<a && a<c){
			cout<<"mediana "<<a<<endl; 
		}
		if (c<a && a<b){
			cout<<"mediana "<<a<<endl; 
		}	
		if  (b>c && a==c){
			cout<<"mediana "<<a<<endl;
		}
		if (b<c && a==c){
			cout<<"mediana "<<a<<endl;
		}
		if (a<b && b<c){
			cout<<"mediana "<<b<<endl; 
		}	
		if  (c<b && b<a){
			cout<<"mediana "<<b<<endl;  
		}
		if  (b<c && c<a){
			cout<<"mediana "<<c<<endl; 
		}
		if (a<c && c<b){
			cout<<"mediana "<<c<<endl; 
		}
		d=a+b+c;
		cout<<"media "<<d/3<<endl; 
		i++;
	}
	
	return 0;
}

