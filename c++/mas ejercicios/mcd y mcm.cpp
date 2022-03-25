#include <iostream>
using namespace std;
int MCM(int x, int y, int z){
	int j=0, k=0, h=0, l=0, t=0, g=0;
	while (x!=1 || y!=1 || z!=1) {
		cout<<""<<endl;
		for (int i=2;i<4;i++){
			if (x % i==0){
				x=x/i;
				if (i==2)
					j++;
				else
					k++;
			}
			if(y % i==0){
				y=y/i;
				if (i==2)
					j++;
				else
					k++;
			}
			if (z % i==0){
				z=z/i;	
				if (i==2)
					j++;
				else
					k++;
			}
		}
		for (int i=5;i<8;i+=2){
			if (x % i==0){ 
				x=x/i;
				if (i==5)
					h++;
				else
					l++;
			}
			if (y % i==0){
				y=y/i;
				if (i==5)
					h++;
				else
					l++;
			}
			if (z % i==0){				
				z=z/i;
				if (i==5)
					h++;
				else
					l++;
			}
		}
		for (int i=11;i<14;i+=2){
			if (x % i==0 ){
				x=x/i;
				if (i==11)
					t++;
				else
					g++;
			}
			if (y % i==0){
				y=y/i;
				if (i==11)
					t++;
				else
					g++;
			}
			if (z % i==0){
				z=z/i;
				if (i==11)
					t++;
				else
					g++;
			}
		}
	}	
	if (j!=0)
		j*=2;
	else 
		j=1;
	if (k!=0)
		k*=3;
	else
		k=1;
	if (h==0)
		h=1;
	else 
		h*=5;
	if (l==0)
		l=1;
	else
		l*=7;
	if (t==0)
		t=1;
	else
		t*=11;
	if(g==0)
		g=1;
	else
		g*=13;
	int mcm=j*k*l*h*t*g;
	return mcm;
}


int MCD(int x, int y, int z){
	int j=0, k=0, h=0, l=0, t=0, g=0;
	while (x!=1 && y!=1 && z!=1) {
		for (int i=2;i<4;i++){
			if (x % i==0 && y % i==0 && z % i==0){
				x=x/i;
				y=y/i;
				z=z/i;
				if (i==2)
				j++;
				else
				k++;
			}
		}
		for (int i=5;i<8;i+=2){
			if (x % i==0 && y % i==0 && z % i==0){
				x=x/i;
				y=y/i;
				z=z/i;
				if (i==5)
					h++;
				else
					l++;
			}
		}
		for (int i=11;i<14;i+=2){
			if (x % i==0 && y % i==0 && z % i==0){
				x=x/i;
				y=y/i;
				z=z/i;
				if (i==11)
					t++;
				else
					g++;
			}
		}
	}
	if (j!=0)
		j*=2;
	else 
		j=1;
	if (k!=0)
		k*=3;
	else
		k=1;
	if (h==0)
		h=1;
	else 
		h*=5;
	if (l==0)
		l=1;
	else
		l*=7;
	if (t==0)
		t=1;
	else
		t*=11;
	if(g==0)
		g=1;
	else
		g*=13;
	int mcd=j*k*l*h*t*g;
	return mcd;
}
int main() {
	unsigned  a, b, c;
	cin>>a>>b>>c;
	MCM(a,b,c);
	MCD(a,b,c);
	cout<<"el MCD es: "<<MCD(a,b,c)<<", el MCM es: "<<MCM(a,b,c)<<endl;
	return 0;
}

