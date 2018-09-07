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
		//print i no. of spaces
		for(int j=0;j<=i;j++)
		cout<<" ";
		for(int j=0;j<n;j++)
		{
			//then for row 1 and row n print n stars
			if(i==0||i==n-1)
			cout<<"*";
			//for all other rows print stars only for column no.s (j) 1 and n and print spaces in between
			else
			{
				if(j==0||j==n-1)
				cout<<"*";
				else
				cout<<" ";
			}
		}
		//move to the next row/line
		cout<<endl;
	}
	//Adios
	return 0;
}

