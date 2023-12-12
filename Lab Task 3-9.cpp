/*3. Using 2D arrays in C++, take transpose of a 3x3 matrix. Make a transpose function.*/

#include<iostream>
using namespace std;

//Defining function
int transpose (int a[3][3], int b[3][3])
{
	//Computing result
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	b[j][i]=a[i][j];
    }
	}	
}

//Main function
int main()
{
	//Declaring variables
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, Transpose[3][3];
	//Calling function
	transpose (a,Transpose);
	//Displaying output
	cout<<"Transpose of a Matrix =\t"; 
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<Transpose[i][j]<<" ";	
	}
	cout<<endl<<"\t\t\t";	
	}	
}
