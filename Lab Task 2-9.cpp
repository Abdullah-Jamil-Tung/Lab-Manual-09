/*2. Write a function to add two 2D arrays of size 3x3.*/

#include<iostream>
using namespace std;

//Defining function
int sum(int a[3][3], int b[3][3], int c[3][3])
{
	//Computing Result
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	c[i][j] = a[i][j] + b[i][j];
	}}
	//Displaying Output
	cout<<"Sum of 2D Matrices =\t";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<c[i][j]<<" ";
	}
	cout<<endl<<"\t\t\t";
	}
}

//Main function
int main()
{
	//Declaring variables
	int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
	int b[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
	int c[3][3];
	//Calling function
	sum( a, b, c);
}
