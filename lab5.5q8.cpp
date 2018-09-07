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
	//for row no.s (i) 1 to n, print i (equal to the row no.) of stars
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	//end loop
	}
	//Adios
	return 0;
}
