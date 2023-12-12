/*1. Make 2D Array in C++ and print left diagonal and right diagonal sum of a 3x3 matrix.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables
	int a[3][3] , sum, x=1;
	//Taking Inputs
	cout<<"Enter the Elements for Matrix A\n\n";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<"Enter Element #"<<x<<" : ";
	cin>>a[i][j];
	x++;
	}
	}
	cout<<"\n\n";
	
	//Sum of Left Diagonal
	cout<<"Left Diagonal\n\n";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	if (i==j)
	cout<<a[i][j]<<" ";
	else
	cout<<"  ";
	}
	cout<<endl;
	}
	cout<<endl;
	sum = a[0][0] + a[1][1] + a[2][2];
	cout<<"Left Diagonal Sum = "<<a[0][0]<<" + "<<a[1][1]<<" + "<<a[2][2]<<" = "<<sum<<"\n\n\n";
	
	//Sum of Right Diagonal
	cout<<"Right Diagonal\n\n";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	if (i==0&&j==2||i==1&&j==1||i==2&&j==0)
	cout<<a[i][j]<<" ";
	else
	cout<<"  ";
	}
	cout<<endl;
	}
	cout<<endl;	
	sum = a[0][2] + a[1][1] + a[2][0];
	cout<<"Right Diagonal Sum = "<<a[0][2]<<" + "<<a[1][1]<<" + "<<a[2][0]<<" = "<<sum<<"\n\n";
}
