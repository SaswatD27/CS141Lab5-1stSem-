//include library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare int variable n
	int n;
	//input value of n
	cout<<"Input an int value - ";
	cin>>n;
	//for row no.s (i) 1 to n
	for(int i=0;i<n;i++)
	{
		//print i no. of spaces (i.e. the same as that of the row no.)
		for(int j=0;j<=i;j++)
		cout<<" ";
		//then print n stars in the row
		for(int j=0;j<n;j++)
		cout<<"*";
		//move to the next row/line
		cout<<endl;
	}
	//Adios
	return 0;
}

