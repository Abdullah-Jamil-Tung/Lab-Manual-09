/*4. Using 2D arrays in C++, implement 3x3 matrix multiplication. Make a function.*/

#include<iostream>
using namespace std;

//Defining function
int Multiply(int a[3][3], int b[3][3], int Multi[3][3])
{
	//Computing result
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	Multi[i][j]=0;
	for (int k=0; k<3; k++)
	{
	Multi[i][j]+=a[i][k]*b[k][j];
	}
	}
	}
}

//Main function
int main()
{
	//Declaring variables
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int c[3][3];
	//Calling function
	Multiply(a,b,c);
	//Displaying output
	cout<<"Multiplication of Two 3x3 Matrices =\t"; 
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<c[i][j]<<" ";	
	}
	cout<<endl<<"\t\t\t\t\t";	
	}	
}

