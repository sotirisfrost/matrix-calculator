//header file
#include <iostream>
using namespace std;
class Matrix{
	public:
		void printMatrix(int,float [][30]);
		void addSubtract(int,int,float [][30],float [][30]);
		void multiply(int,float [][30],float [][30]);
		void inverse(int,float [][30]);
	private:
		float arr1[30][30];
		float arr2[30][30];
};
