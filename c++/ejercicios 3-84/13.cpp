#include <iostream>
using namespace std;

int main() {
	int r,R;
	double V1,V2,Vt;
	cout<<"radios de las esferas"<<endl;
	cin>>R>>r;
	V1=(2*1309/625)*(R*R*R);	
	V2=(2*1309/625)*(r*r*r);	
	if (V1>V2){
		Vt=V1-V2;
	}
	else{ 
		Vt=V2-V1;
	}
	cout<<"el volumen del casquete entre las esferas concetricas es "<<Vt;
	return 0;
}

