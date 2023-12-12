/*5. Print the multiplication table of 15 using recursion.*/

#include<iostream>
using namespace std;

//Making a recursive function 
int Table_Of_15(int start, int end)
{
	//Checking for invalid operations
	if (start<=0)
	return 0;
	
	//Computing result
	else if (start<=end)
	{cout<<"15 x "<<start<<" = "<<15*start<<endl;
	//Recalling function
	return Table_Of_15(start+1, end);}
}

//Main Function
int main()
{
	//Declaring variables
	int x=1, y=10;
	//Displaying output
	cout<<"Table of 15\n\n";
	Table_Of_15(x,y);
}
