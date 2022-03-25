#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

int main()
{
	
	int pc, i, n, n_puntos, puntos2;
	bool punto;
	
	n_puntos=0;
	puntos2=0;
	
	srand(time(NULL));
	
	for(i = 1; i <= 3; i++)
	{	
		cout<<"escoja 1 para piedra, 2 para papel y 3 para tijeras"<<endl;	
		cin>>n;
		
		pc = 1 + rand() % (3); 
		
		switch(n)
		{
		case 1:
			if (pc==1)
			{
				cout<<"empate, pc saco piedra"<<endl;
			}
			if (pc==2)
			{
				punto =false;
				cout<<"empate, pc saco piedra"<<endl;
			}
			else
			{
				punto = true;
				cout<<"tienes un punto,pc saco tijeras"<<endl;
			}
			if (punto == true)
			{
				n_puntos= n_puntos+1;
			}	
			if (punto == false)
			{
				puntos2= puntos2+1;
			}
			break;
		case 2:
			if (pc==2) 
				cout<<"empate, pc saco papel"<<endl;
			if (pc==1)
			  {
				punto= true;
				cout<<"tienes un punto, pc saca piedra"<<endl;
			}
			else
				{
				punto=false;
				cout<<"tienes un punto, pc saca piedra"<<endl;	
			}
			if (punto ==true)
			{
				n_puntos= n_puntos+1;
			}
			if (punto==false)
			{
				puntos2=puntos2+1;
			}
			break;
		case 3:
			if (pc==3)
				cout<<"empate,pc saco tijeras"<<endl;
			if (pc==2)
			{
				punto= true;
				cout<<"tienes un punto, pc saco papel"<<endl;
			}
			if (pc==1)
			{
				punto=false;
				cout<<"la pc tiene un punto, pc saca piedra"<<endl;
			}
			if (punto==true)
			{
				n_puntos= n_puntos+1;
			}
			if (punto==false)
			{
				puntos2= puntos2+1;
			}
			break;
		}
	}	
	if (n_puntos==puntos2)
	{
		cout<<"tie (empate)"<<endl;
	}
	if (n_puntos>puntos2)
	{
		cout<<"winner  the game"<<endl;
	}
	if (n_puntos<puntos2)
	{
		cout<<"you lost the game"<<endl;
	}


	return 0;
}
