//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//declare int variable (n) to store the value of the no. of rows/columns of the square star pattern and two counter variables
	int n,i,j;
	//input the value of n
	cout<<"Enter a number - ";
	cin>>n;
	//use for loop to increment the value of the row from 1 to n
	for(i=1;i<=n;i++)
	{
		//use a nested for loop to increment the column value from 1 to n
		for(j=1;j<=n;j++)
		{
			//print "*"
			cout<<"*";
			//end the nested for loop body
		}
		//start printing in the next line
		cout<<endl;
		//end the first for loop
	}
//That's all folks!
return 0;
} 
