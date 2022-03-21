//main
#include <iostream>
#include <iomanip>
#include "Matrix.h"
using namespace std;
int main(){
	Matrix myMatrix;
	int N,M,choice;
	float A[30][30],B[30][30];
	cout<<"Give size of arrays (rows=cols): ";
	cin>>N;
	A[N][N];
	B[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>A[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"B["<<i<<"]["<<j<<"]=";
			cin>>B[i][j];
		}
	}
	cout<<"\nPress 	1 for Addition\n";
	cout<<"	2 for Subtraction\n";
	cout<<"	3 for Multiplication\n";
	cout<<"	4 for Inverse\n";
	cout<<"	5 to EXIT\n";
	cin>>choice;
	cout<<endl;
	if(choice==1){
		cout<<"A+B:\n";
		myMatrix.addSubtract(choice,N,A,B);
	}
	else if(choice==2){
		cout<<"A-B:\n";
		myMatrix.addSubtract(choice,N,A,B);
	}
	else if(choice==3){
		cout<<"A*B:\n";
		myMatrix.multiply(N,A,B);
	}
	else if(choice==4){
		cout<<"Inverse of A:\n";
		myMatrix.inverse(N,A);
		cout<<"\nInverse of B:\n";
		myMatrix.inverse(N,B);
	}	
return 0;
}
