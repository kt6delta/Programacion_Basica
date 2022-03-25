#include <iostream>

using namespace std;

int main() {
	cout<<"ingrese numeros para sacar impares"<<endl;
	int a,b;
	cin>>a>>b;
	
	while (a!=0 && b!=0)
	{
		if (a<b)
		{
			if ((a%2 ==1) && (b%2 ==1))
			{
				while(b-a!=2)
				{
					cout<<"coloque otros numeros"<<endl;
					cin>>a>>b;
				}
				cout<<a<<" "<<b<<endl;
			}
			
			if ( (a%2==0 && b%2==1) || (a%2==1 && b%2==0) )
			{
				while (b-a!=3) 
				{
					cout<<"coloque otros numeros"<<endl;
					cin>>a>>b;
				}
				if (a%2 ==0 && b%2 ==1)
				{
					a++;
					cout<<a<<" "<<b<<endl;
				}
				else{
					b=b-1;
					cout<<a<<" "<<b<<endl;
				}
			}
			if (a%2 ==0 && b%2 ==0) 
			{
				while (b-a!=4)
				{
					cout<<"coloque otros numeros"<<endl;
					cin>>a>>b;
				}
				a++;
				b=b-1;
				cout<<a<<" "<<b<<endl;
			}
		}
		
		if (a>b)
		{
			if (a%2 ==1 && b%2 ==1)
			{
				while (a-b!=2)
				{
				cout<<"coloque otros numeros"<<endl;
				cin>>a>>b;
				}
				cout<<a<<" "<<b<<endl;
			}
			if ((a%2 ==0 && b%2 ==1) || (a%2 ==1 && b%2 ==0) )
			{
				while (a-b !=3)
				{
					cout<<"coloque otros numeros"<<endl;
					cin>>a>>b;
				}
				if (a%2 ==1 && b%2 ==0) 
				{
					b++;
					cout<<b<<" "<<a<<endl;
				}
				else{
					a=a-1;
					cout<<b<<" "<<a<<endl;
				}
			}
			if (a%2 ==0 && b%2 ==0) 
			{
				while (a-b!=4)
				{
					cout<<"coloque otros numeros"<<endl;
					cout<<a<<" "<<b<<endl;
				}
				a++;
				b=b-1;
				cout<<a<<" "<<b<<endl;
			}
		}
		cout<<"numeros para sacar impares"<<endl;
		cin>>a>>b;
	}
	return 0;
}

	
	
	
	
	
	
	
	
	

