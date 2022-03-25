#include<iostream>
using namespace std;

int main() {
	int mod,sum_total,verificacion,verificacion_pc,NIT_usuario[9];
	
	cout<<"escriba el numero de verificacion"<<endl;
	cin>>verificacion;
	while (verificacion>9 || verificacion<0){
		cout<<"numero entre 0 y 9"<<endl;
		cin>>verificacion;
	}
	cout<<"numero NIT numero por numero"<<endl;
	for (int i=0;i<9;i++){
		cin>>NIT_usuario[i];
		while (NIT_usuario[i]>9 || NIT_usuario[i]<0){
			cout<<"solo numeros del 0 al 9"<<endl;
			cin>>NIT_usuario[i];
		}
	}
	sum_total=4*NIT_usuario[0]+3*NIT_usuario[1]+2*NIT_usuario[2]+7*NIT_usuario[3]+6*NIT_usuario[4]+5*NIT_usuario[5]+4*NIT_usuario[6]+3*NIT_usuario[7]+2*NIT_usuario[8];
	mod=sum_total%11;
	verificacion_pc=11-mod;
	if (mod==0)
		verificacion_pc=0;
	if (mod==1)
		verificacion_pc=1;
	
	cout<<sum_total<<endl;
	cout<<verificacion_pc<<"!="<<verificacion<<endl;
	if (verificacion_pc!=verificacion)
	cout<<"No es NIT"<<endl;
	else 
		cout<<"Si es NIT"<<endl;

	return 0;
}
