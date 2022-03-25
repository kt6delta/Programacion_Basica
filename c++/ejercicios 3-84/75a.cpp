#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num1[9],num2[9],suma,sumar[100],total=0,can_num1,can_num2,nume1,nume2;
	char b1,b2,uni;
	
	cout<<"ingrese base del 1er numero(8,0 o 2)"<<endl;
	cin>>b1;
	cout<<"ingrese base del 2do numero (8,0 o 2)"<<endl;
	cin>>b2;
	
	cout<<"cantidad de diguitos del primer numero"<<endl;
	cin>>can_num1;
	if (b1==b2 && b1=='0'){ 
		cout<<"ingrese numero"<<endl;
		cin>>nume1;
	}
	else{
		cout<<"ingrese numero, uno por uno"<<endl;
		for (int n=0;n<can_num1;n++){
			cin>>num1[n];
		}
	}
	cout<<"cantidad de diguitos del segundo numero"<<endl;
	cin>>can_num2;
	if (b1==b2 && b1=='0'){
		cout<<"ingrese numero"<<endl;
		cin>>nume2;
	}
	else{
		cout<<"ingrese numero, uno por uno"<<endl;
		for (int n=0;n<can_num2;n++){
			cin>>num2[n];
		}
	}
	cout<<"ingrese en que base desea el resultado"<<endl;
	cin>>uni;
	if (b1=='0' && b2=='0'){
		suma=nume1+nume2;
		if (b1==uni)
			total=suma;
	}
	switch (uni){
	case '0': //TFN
		if (b1==b2 && b1=='2'){ //()2->()10 + ()2->()10
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1==b2 && b1=='8'){ //()8->()10 + ()8->()10
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1=='8' && b2=='2'){ 
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1=='2' && b2=='8'){ 
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1=='2' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1=='0' && b2=='2'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if(b1=='8' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		if (b1=='0' && b2=='8'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			total=b+c;
		}
		cout<<"el resultado es "<<total<<endl;
		break;
	case '2':
		if (b1==b2 && b1=='0'){
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1==b2 && b1=='8'){
			//(num1)8->(num1)10, (num2)8->(num2)10
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='8' && b2=='2'){ 
			int c=0,b=0,a,i,j=can_num1-1; //(num1)8->(num1)10 + (num2)2->(num2)10 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='2' && b2=='8'){ 
			int c=0,b=0,a,i,j=can_num1-1; // (num1)2->(num1)10 + (num2)8->(num2)10
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='2' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='0' && b2=='2'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if(b1=='8' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if(b1=='0' && b2=='8'){
			int c=0,b=0,a,i,j=can_num1-1;
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)2
			do{
				mod=suma%2;
				sumar[n]=mod;
				n++;
				suma=suma/2;
			}while (suma/2!=0);
			mod=suma%2;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		break;
	case '8': 
		if (b1==b2 && b1=='2'){ //(num1)2->(num1)10 + (num2)2->(num2)10
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1==b2 && b1=='0'){
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='8' && b2=='2'){ 
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='2' && b2=='8'){ 
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='2' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(2,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='0' && b2=='2'){
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(2,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='8' && b2=='0'){
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(8,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(10,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		if (b1=='0' && b2=='8'){
			int c=0,b=0,a,i,j=can_num1-1; 
			for (i=0;i<can_num1;i++){
				a=num1[i]*pow(10,j);
				b=a+b;
				j--;
			}
			j=can_num2-1; 
			for (i=0;i<can_num2;i++){
				a=num2[i]*pow(8,j);
				c=a+c;
				j--;
			}
			suma=b+c;
			cout<<suma<<endl;
			int mod,n=0; //(suma)10->(suma)8
			do{
				mod=suma%8;
				sumar[n]=mod;
				n++;
				suma=suma/8;
			}while (suma/8!=0);
			mod=suma%8;
			sumar[n]=mod;
			cout<<"el resultado es ";
			for (int i=n;i>-1;i--){
				cout<<sumar[i];
			}
		}
		break;
	}	
	return 0;
}

