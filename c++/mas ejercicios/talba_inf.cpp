#include <iostream>
using namespace std;

int main() {
	int A[11][11];
	cout<<"X|";
	
	for(int i=1; i<11;i++){
		A[0][i]=i;
		cout<<"   "<<A[0][i];
	}
	cout<<endl;
	for(int n=0; n<50;n++){
		cout<<"-";
	}
	for(int j=1; j<11;j++){
		A[j][0]=j;
		cout<<"\n"<<endl<<A[j][0]<<"|";
	}
	
	
	for(int i=1; i<11;i++){
		cout<<"\n"<<endl;
		for(int j=1; j<11;j++){
			if (i>j){
				A[j][i]=A[0][i]*A[j][0];
				cout<<"  "<<A[j][i];
			}
			else {
				A[j][i]=A[0][i]*A[j][0];
				cout<<"    ";
			}
		}
	}
	return 0;
}

