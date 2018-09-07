//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//declare int variable
	int n;
	//input int variable value
	cout<<"Enter an integer value - ";
	cin>>n;
	//for row no.s (=i) 1 to n 
	for(int i=1;i<=n;i++)
	{
	//print stars when column no. j = i (row no.) and j=1 (1st column) and between them print spaces or when j=n print n stars
		if(i==n)
		{
			for(int j=1;j<=i;j++)
			cout<<"*";
		}
		else
		{		
			for(int j=1;j<=i;j++)
			{
				if(j==1||j==i)			
				cout<<"*";
				else
				cout<<" ";
			}
		}
		cout<<endl;
	//end loop
	}
	//Adios
	return 0;
}
