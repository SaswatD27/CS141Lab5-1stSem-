//include library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare int variable n
	int n;
	//input the value of n
	cout<<"Enter a no. - ";
	cin>>n;
	//for n rows
	for(int i=0;i<n;i++)
	{
		//print n stars only for rows 1 and n
		if(i==0||i==(n-1))
		{
			for(int j=0;j<n;j++)
			cout<<"*";
		}
		//print 1 star each at the beginning and end of a row with n-2 spaces in between for rows 2 to n-1
		else
		for(int j=0;j<n;j++)
		{
			if(j==0||j==(n-1))
			cout<<"*";
			else
			cout<<" ";
		}
		//go to next line
		cout<<endl;
	}	
	//That's all folks
	return 0;
}
