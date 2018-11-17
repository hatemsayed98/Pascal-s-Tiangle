/*
 Name   = Hatem Sayed Ali
 ID     = 20170084
 Group  : 1
 Date   : 17 / 11 / 2018

 Individual task for ID lasts with (4)
 Problem 9 on page 351 (Programming Abstractions)

*/

#include <iostream>
using namespace std;


int pascal(int row,int column); // declaration

int main()
{
	int num;
	cout<<"Enter number of rows : ";
	cin>>num;
	for(int i = 1;i <= num;i++) // i represents rows
	{
	    for (int space=0 ; space < (num - i)*2 ; space ++) // adjusting spaces for pyramid shape
            cout<<" ";

		for(int j = 1;j <= i;j++)  // j represents columns
		{
			cout<<pascal(i,j);
        cout<<"   ";		} // adjusting spaces between numbers
		cout<<"\n";   // new line after each line
	}
return 0;
}
int pascal(int row,int column) // recursive function
{
	if(column==0)  // Base case 1 (wrong direction)
		return 0;
	else if(row==1&&column==1) // Base case 2 (the condition of which the addition will happen )
		return 1;
	else if(column>row) // Base case 3 (wrong direction )
		return 0;
	else
		return (pascal(row-1 , column-1)+ pascal(row-1,column)); // Recursion (2 pascal functions open one rows and columns --)
} // (other with rows -- only)
