//functions
#include <iostream>
#include <iomanip>
#include "Matrix.h"
using namespace std;
Matrix myMatrix;
void Matrix::printMatrix(int N,float arr[][30]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
	}
}
void Matrix::addSubtract(int choice,int N,float arr1[][30],float arr2[][30]){
	float sum[30][30];
	sum[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(choice==1)
				sum[i][j]=arr1[i][j]+arr2[i][j];
			else if(choice==2)
				sum[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	myMatrix.printMatrix(N,sum);
}
void Matrix::multiply(int N,float arr1[][30],float arr2[][30]){
	float mult[30][30];
	mult[N][N];
	for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            for(int k=0;k<N;k++)
                mult[i][j]+=arr1[i][k]*arr2[k][j];
    myMatrix.printMatrix(N,mult);
}
void Matrix::inverse(int N,float a[][30]){
	int i,j,k;
	float t;
	for(i=0;i<N;i++)
		for(j=N;j<2*N;j++)
			if(i==j-N)
				a[i][j]=1;
			else
				a[i][j]=0;
	for(i=0;i<N;i++){
		t=a[i][i];
		for(j=i;j<2*N;j++)
			a[i][j]=a[i][j]/t;
		for(j=0;j<N;j++){
			if(i!=j){
				t=a[j][i];
				for(k=0;k<2*N;k++)
					a[j][k]=a[j][k]-t*a[i][k];
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=N;j<2*N;j++){
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
}
