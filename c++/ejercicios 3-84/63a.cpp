#include <stdlib.h>
#include <time.h>
#include <math.h>
#include<iostream>
using namespace std;

int main() {
	
	int num,a,b,c,d,a_pve,b_pve,c_pve,d_pve,picas,fijas,pve,intentos;
	float a_1,b_1,c_1,decima;
	
	srand(time(NULL));
	do {
		num = 1000 + rand() % (9999);
		
		a_1=num*pow (10,-3);
		a=a_1; //1er diguito
		decima=a_1-a;
		b_1=decima*10;
		b=b_1; //2do digito
		decima=b_1-b;
		c_1=decima*10;
		c=c_1; //3er digito
		decima=c_1-c+0.01;
		d=(decima*10); //4to digito
	} while (!(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d && num>999 && num<=9999) );
	cout<<num<<endl;
	
	intentos=0;
	cout<<"adivine el numero, con el juego fijas y picas"<<endl;
	cin>>pve;
	while (num!=pve){
		
		a_1=pve*pow (10,-3);
		a_pve=a_1; //1er diguito
		decima=a_1-a_pve;
		b_1=decima*10;
		b_pve=b_1; //2do digito
		decima=b_1-b_pve;
		c_1=decima*10;
		c_pve=c_1; //3er digito
		decima=c_1-c_pve+0.01;
		d_pve=(decima*10); 
	
		fijas=0;
		picas=0;
		
		if (a==a_pve) //fijas
			fijas++;
		if (b==b_pve) 
			fijas++;
		if (c==c_pve) 
			fijas++;
		if (d==d_pve) 
			fijas++;
		
		if (a==b_pve) //picas
			picas++;
		if (a==c_pve) 
			picas++;
		if (a==d_pve) 
			picas++;
		
		if (b==a_pve) 
			picas++;
		if (b==c_pve) 
			picas++;
		if (b==d_pve) 
			picas++;
		
		if (c==a_pve) 
			picas++;
		if (c==b_pve) 
			picas++;
		if (c==d_pve) 
			picas++;
		
		if (d==a_pve) 
			picas++;
		if (d==b_pve) 
			picas++;
		if (d==c_pve) 
			picas++;
		
		cout<<"fijas "<<fijas<<" y picas "<<picas<<endl; 
		intentos++;
		cin>>pve;
	}
		cout<<"felicidades adivinaste"<<endl<<"N° de intentos "<<intentos<<endl;
		return 0;
}
