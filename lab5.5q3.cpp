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
	//for row no. 1 to n
	for(int i=0;i<n;i++)
	{
		//for column no. 1 to n
		for(int j=0;j<n;j++)
		{
			//print only stars if row no. is 1 or n
			if(i==0||i==(n-1))
			cout<<"*";
			//for all other row no.s (j), print stars if column no. (j) = 0,i,n-(i+1),n-1
			else
			{
				if(j==0||j==i||j==n-i-1||j==n-1)
				cout<<"*";
				else
				cout<<" ";
			}
		//end nested loop body
		}
		//move to next line
		cout<<endl;
		//end for loop body
	}
	//That's all folks
	return 0;
}

