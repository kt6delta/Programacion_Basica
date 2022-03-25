#include <iostream>
using namespace std;

int main() {
	int A[5][16]; //A[i][j]
	int j;
	for(j=1;j<16;j++){
		A[0][j]=j;			
	}
	for(int i=1;i<5;i++){
		A[i][0]=i;
	}
	
	for (int i=1;i<5;i++){
		cout<<endl;
		for (j=1;j<16;j++){
			A[i][j]=A[0][j]*A[i][0];
			cout<<"  ";
			printf("%X",A[i][j]);
		}
	}
	
	return 0;
}

