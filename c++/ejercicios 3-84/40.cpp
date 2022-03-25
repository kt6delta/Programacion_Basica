#include <iostream>
using namespace std;

int main() {
	string un1,un2,un3;
	float cant1,cant2,total;
	
	cout<<"indicar 1ra cantidad "<<endl;
	cin>>cant1;
	cout<<"coloque unidades (lb,kg,g,oz,@,ton)"<<endl;
	cin>>un2;
	
	cout<<"indicar 2da cantidad"<<endl;
	cin>>cant2;
	cout<<"coloque unidades (lb,kg,g,oz,@,ton)"<<endl;     
	cin>>un3;
	
	cout<<"coloque las unidades en las que quiere el resultado (lb,kg,g,oz,@,ton)"<<endl; //metros,kilometros,decimetros,pies,yarda,milla,pulgada
	cin>>un1;
	
	if (un1=="lb"){
		
		if (un2== "kg")  //pasar a lb
			cant1=(cant1*2.20462);
		if (un2== "g")
			cant1=(cant1*0.00220462);
		if (un2== "oz")
			cant1=(cant1*0.0625);
		if (un2=="@")
			cant1=(cant1*25);
		if (un2=="ton")
			cant1=(cant1*2204.62);
		
	
		if (un3=="lb")
			total=cant1-cant2; 
		if (un3=="kg")
			total=cant1-(cant2*2.20462); 
		if (un3== "g")
			total=cant1-(cant2*0.00220462); 
		if (un3=="oz")
			total=cant1-(cant2*0.0625); 
		if (un3=="@")
			total=cant1-(cant2*25); 
		if (un3=="ton")
			total=cant1-(cant2*2204.62); 
	}
	
	if (un1=="kg"){
		if (un1=="lb")
			cant1=cant1*0.453592;
		if (un1=="g")
			cant1=cant1*0.001;
		if (un1=="oz")
			cant1=cant1*0.0283495;
		if (un1=="@")
			cant1=cant1*11.3398;
		if (un1=="ton")
			cant1=cant1*1000;
		
		if (un3=="lb")  
			total=cant1-(cant2*0.453592); 
		if (un3=="g")
			total=cant1-(cant2*0.001); 
		if (un3=="oz")
			total=cant1-(cant2*0.0283495); 	
		if (un3=="@")
			total=cant1-(cant2*11.3398); 	
		if (un3=="ton")
			total=cant1-(cant2*1000); 
		if (un3=="kg")
			total=cant1-cant2; 
	}
	
	
	if (un1=="g"){
		
		if (un2=="lb" ) 
			cant1=cant1*453.592;
		if (un2=="kg" )
			cant1=cant1*1000;
		if (un2=="oz" )
			cant1=cant1*28.3495;
		if (un2=="@" )
			cant1=cant1*11339.8;
		if (un2=="ton" )
			cant1=cant1*1000000;
		
		if (un3=="lb") 
			total=cant1-(cant2*453.592); 
		if (un3=="kg")
			total=cant1-(cant2*1000);
		if (un3=="g")
			total=cant1-cant2; 
		if (un3=="oz")
			total=cant1-(cant2*28.3495); 
		if (un3=="@")
			total=cant1-(cant2*11339.8); 
		if (un3=="ton")
			total=cant1-(cant2*1000000); 
	}
	
	if (un1=="oz"){		
		if (un2=="lb")
			cant1=cant1*16;
		if (un2=="kg")
			cant1=cant1*35.274;
		if (un2=="g")
			cant1=cant1/28.35;
		if (un2=="@") 
			cant1=cant1*400;
		if (un2=="ton") 
			cant1=cant1*35274;
		
		if (un3=="lb")
			total=cant1-(cant2*16);
		if (un3=="kg")
			total=cant1-(cant2*35.274);
		if (un3=="g")
			total=cant1-(cant2/ 28.35);
		if (un3=="@")  
			total=cant1-(cant2*400);
		if (un3=="ton")
			total=cant1-(cant2*35274);
		if (un3=="oz")
			total=cant1-cant2;
	}
	if (un1=="@"){
		
		if (un2=="lb")
			cant1=cant1/25;
		if (un2=="kg")
			cant1=cant1/11.3398;
		if (un2=="g")
			cant1=cant1/11339.8;
		if (un2=="oz")
			cant1=cant1/400;
		if (un2=="ton")
			cant1=cant1*88.18498;
		
		if (un3=="lb")
			total=cant1-(cant2/25);
		if (un3=="kg")
			total=cant1-(cant2/11.3398); 
		if (un3=="g")
			total=cant1-(cant2/11339.8);
		if (un3=="@") 
			total=cant1-cant2; 
		if (un3=="oz")
			total=cant1-(cant2/400); 
		if (un3=="ton")
			total=cant1-(cant2*88.18498); 
	}
	
	if (un1=="ton") {
		
		if (un2=="lb")
			cant1=cant1*0.000453592;
		if (un2=="kg")
			cant1=cant1*0.001;
		if (un2=="g")
			cant1=cant1/1000000;
		if (un2=="oz")
			cant1=cant1*0.00002835;
		if (un2=="@")
			cant1=cant1/88.18498;
		
		if (un3=="lb")
			total=cant1-(cant2*0.000453592); 
		if (un3=="kg")
			total=cant1-(cant2*0.001); 
		if (un3=="g")
			total=cant1-(cant2/1000000);
		if (un3=="ton")
			total=cant1-cant2; 
		if (un3=="oz")
			total=cant1-(cant2*0.00002835); 
		if (un3=="@")
			total=cant1-(cant2/88.18498); 
	}
	
	if (total<0)
		total=total*(-1);
	cout<<total<<endl;
	return 0;
}

