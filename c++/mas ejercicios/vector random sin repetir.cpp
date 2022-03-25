#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <iostream>    
using namespace std;

int main(int argc, char *argv[]) {
	srand (time(NULL));
	int car_noves;
	int	no_rep[52];


	
	int pos;

	for(int i=0;i<52;i++){
		no_rep[i]=i+1;
	}
	for (int i=1;i<20;i++){
		pos=rand()%52;
		int	pos2=rand()%52;
		int num=no_rep[pos];
		no_rep[pos]=no_rep[pos2];
		no_rep[pos2]=num;
	}
	for(int i=0;i<52;i++){
		cout<<" "<<no_rep[i];
	}
	return 0;
}
