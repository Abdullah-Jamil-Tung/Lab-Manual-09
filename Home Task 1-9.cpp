/*1. Write a C++ program to take inverse of a 3x3 matrix using its determinant and adjoint.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables
	float m[3][3], determ, det_1, det_2, det_3, cofac[3][3], adj[3][3], inv[3][3], x=1;
	
	//Taking inputs
	cout<<"Enter the Elements for the 3x3 Matrix A\n"<<endl;
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<"Enter Element #"<<x<<" = ";
	cin>>m[i][j];
	x++;
	}
	}
    cout<<"\n\n";
    
	//Calculating Determinant
    det_1 = m[0][0] * (m[1][1]*m[2][2] - m[2][1]*m[1][2]); 
    det_2 = -m[0][1] * (m[1][0]*m[2][2] - m[2][0]*m[1][2]);
	det_3 = m[0][2] * (m[1][0]*m[2][1] - m[2][0]*m[1][1]);
	determ = det_1 + det_2 + det_3;
	if (determ == 0)
	cout<<"Matrix cannot be inverted."<<endl;
	
	else
	{//Calculating Cofactor matrix
	cofac[0][0] = m[1][1]*m[2][2] - m[2][1]*m[1][2];
    cofac[0][1] = -(m[1][0]*m[2][2] - m[2][0]*m[1][2]);
    cofac[0][2] = m[1][0]*m[2][1] - m[2][0]*m[1][1];
    cofac[1][0] = -(m[0][1]*m[2][2] - m[2][1]*m[0][2]);
    cofac[1][1] = m[0][0]*m[2][2] - m[2][0]*m[0][2];
    cofac[1][2] = -(m[0][0]*m[2][1] - m[2][0]*m[0][1]);
    cofac[2][0] = m[0][1]*m[1][2] - m[1][1]*m[0][2];
    cofac[2][1] = -(m[0][0]*m[1][2] - m[1][0]*m[0][2]);
    cofac[2][2] = m[0][0]*m[1][1] - m[1][0]*m[0][1];
    
    //Calculating Adjoint
    for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	adj[j][i]=cofac[i][j];
    }
	}
	
	//Displaying Matrix A
	cout<<"Matrix A\n\n";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	cout<<m[i][j]<<"  ";
	}
	cout<<endl;
	}
	cout<<"\n\n";
	
	//Displaying Inverse of Matrix A
	cout<<"Inverse of Matrix A\n\n";
	for (int i=0; i<3; i++)
	{
	for (int j=0; j<3; j++)
	{
	//Computing Inverse of Matrix A
	inv[i][j] = adj[i][j]/determ;
	if (inv[i][j]==-0)
	inv[i][j]=0;
	cout<<inv[i][j]<<"  ";
	}
	cout<<endl;
	}
	}
}
