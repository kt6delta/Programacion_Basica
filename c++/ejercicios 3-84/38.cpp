#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	string un1,un2,un3;
	
	float cant1,cant2,total;
	cout<<"indicar 1ra cantidad "<<endl;
	cin>>cant1;
	cout<<"coloque unidades (m,km,dm,ft,yd,mi,in)"<<endl;
	cin>>un2;
	
	cout<<"indicar 2da cantidad"<<endl;
	cin>>cant2;
	cout<<"coloque unidades (m,km,dm,ft,yd,mi,in)"<<endl;     
	cin>>un3;
	
	cout<<"coloque las unidades en las que quiere el resultado (m,km,dm,ft,yd,mi,in)"<<endl; //metros,kilometros,decimetros,pies,yarda,milla,pulgada
	cin>>un1;
	
	if (un1=="m"){
		
		if (un2== "km")  //pasar a m
			cant1=(cant1*1000);
		if (un2== "dm")
			cant1=(cant1*0.1);
		if (un2== "ft")
			cant1=(cant1*0.3048);
		if (un2=="yd"){
			cant1=(cant1*0.9144);
		}
		if (un2=="mi"){
			cant1=(cant1*1609.344);
		}
		if (un2=="in"){
			cant1=(cant1*0.0254);
		}
		
		if (un3=="m"){ //mostrar en m
			total=cant1-cant2; //m-m
		}
		if (un3=="mi"){
			total=cant1-(cant2*1609.344); // m-mi
		}
		if (un3== "km"){
			total=cant1-(cant2*1000); //m-km
		}
		if (un3=="yd"){
			total=cant1-(cant2*0.9144); //m-yd
		}
		if (un3=="ft"){
			total=cant1-(cant2*0.3048); // m-ft
		}
		if (un3=="dm"){
			total=cant1-(cant2*0.1); // m-dm
		}
		if (un3== "in"){
			total=cant1-(cant2*0.0254); //m-in
		}
	}
	
	if (un1=="dm"){
		if (un1=="m")
			cant1=cant1*10;
		if (un1=="km")
			cant1=cant1*10000;
		if (un1=="ft")
			cant1=cant1*3.048;
		if (un1=="yd")
			cant1=cant1*9.144;
		if (un1=="mi")
			cant1=cant1*16093.4;
		if (un1=="in")
			cant1=cant1/3.937;
		
		if (un3=="m")  //mostrar en dm
			total=cant1-(cant2*10); //dm-
		if (un3=="mi")
			total=cant1-(cant2*16093.4); // dm-mi
		if (un3=="km")
			total=cant1-(cant2*10000); //dm-km	
		if (un3=="yd")
			total=cant1-(cant2*9.144); //dm-yd	
		if (un3=="ft")
			total=cant1-(cant2*3.048); // dm-ft
		if (un3=="dm")
			total=cant1-cant2; // dm-dm
		if (un3=="in")
			total=cant1-(cant2*3.937); //dm-in
	}
	
	
	if (un1=="km"){
		
		if (un2=="m" ) //pasar a km
			cant1=cant1*0.001;
		
		if (un2=="dm" )
			cant1=cant1/10000;
		
		if (un2=="ft" )
			cant1=cant1*0.0003048;
		
		if (un2=="yd" )
			cant1=cant1/1093.613;
		
		if (un2=="mi" )
			cant1=cant1*1.609;
		
		if (un2=="in" )
			cant1=cant1/39370.079;
		
		if (un3=="m") //mostrar en km
			total=cant1-(cant2*0.001); //km-m
		
		if (un3=="mi")
			total=cant1-(cant2*1.609); // km-mi
		
		if (un3=="km")
			total=cant1-cant2; //km-km
		
		if (un3=="yd")
			total=cant1-(cant2/1093.613); //km-yd
		
		if (un3=="ft")
			total=cant1-(cant2*0.0003048); // km-ft
		
		if (un3=="dm")
			total=cant1-(cant2/10000); // km-dm
		
		if (un3=="in")
			total=cant1-(cant2/39370.079); //km-in
	}
	
	if (un1=="ft"){		
		if (un2=="m")
			cant1=cant1*3.281;
		if (un2=="km")
			cant1=cant1*3280.84;
		if (un2=="dm")
			cant1=cant1*0.328084;
		if (un2=="yd")  
			cant1=cant1*3;
		if (un2=="mi") 
			cant1=cant1*5280;
		if (un2=="in") 
			cant1=cant1/12;
		
		if (un3=="m")
			total=cant1-(cant2*3.281);
		if (un3=="km")
			total=cant1-(cant2*3280.84);
		if (un3=="dm")
			total=cant1-(cant2*0.328084);
		if (un3=="yd")  
			total=cant1-(cant2*3);
		if (un3=="mi")
			total=cant1-(cant2*5280);
		if (un3=="in")
			total=cant1-(cant2/12);
	}
	if (un1=="yd"){
		
		if (un2=="m")
			cant1=cant1*1.09361;
		if (un2=="km")
			cant1=cant1*1093.61;
		if (un2=="dm")
			cant1=cant1/9.144;
		if (un2=="ft")
			cant1=cant1/3;
		if (un2=="mi")
			cant1=cant1*1760;
		if (un2=="in")
			cant1=cant1/36;
		
		if (un3=="m")
			total=cant1-(cant2*1.09361);
		if (un3=="km")
			total=cant1-(cant2*1093.61); 
		if (un3=="dm")
			total=cant1-(cant2/9.144);
		if (un3=="yd") 
			total=cant1-cant2; 
		if (un3=="mi")
			total=cant1-(cant2*1760); // yd-mi
		if (un3=="ft")
			total=cant1-(cant2/3); // yd-ft
		if (un3=="in")
			total=cant1-(cant2/36); //yd-in
	}
	
	if (un1=="mi") {
		
		if (un2=="m")
			cant1=cant1/1609.344;
		if (un2=="km")
			cant1=cant1*0.621371;
		if (un2=="dm")
			cant1=cant1/16093.44;
		if (un2=="yd")
			cant1=cant1/1760;
		if (un2=="ft")
			cant1=cant1/5280;
		if (un3=="in")
			cant1=cant1*63360;
		
		
		if (un3=="m")
			total=cant1-(cant2*1609.344); 
		if (un3=="km")
			total=cant1-(cant2*0.621371); 
		if (un3=="dm")
			total=cant1-(cant2/16093.44);
		if (un3=="mi")
			total=cant1-cant2; // mi-mi
		if (un3=="yd")
			total=cant1-(cant2/1760); //mi-yd
		if (un3=="ft")
			total=cant1-(cant2/5280); // mi-ft
		if (un3=="in")
			total=cant1-(cant2*63360); //mi-in
	}
	
	if (un1=="in") {
		
		if (un2=="m")
			cant1=cant1*39.37;
		if (un2=="km")
			cant1=cant1*39370;
		if (un2=="dm")
			cant1=cant1*3.937;
		if (un2=="ft")
			cant1=cant1/12;
		if (un2=="yd")
			cant1=cant1/36;
		if (un2=="mi")
			cant1=cant1*63360;
		
		if (un3=="m")
			total=cant1-(cant2*39.37); 
		if (un3=="km")
			total=cant1-(cant2*39370); 
		if (un3=="dm")
			total=cant1-(cant2*3.937);
		if (un3=="mi")
			total=cant1-(cant2*63360); // in-mi
		if (un3=="yd")
			total=cant1-(cant2/36); //in-yd
		if (un3=="ft")
			total=cant1-(cant2/12); // in-ft
		if (un3=="in")
			total=cant1-cant2; //in-in
	}
	
	if (total<0)
		total=total*(-1);
	cout<<total<<endl;
	return 0;
}

