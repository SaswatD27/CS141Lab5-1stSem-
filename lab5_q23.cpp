//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an int variable to store the value of the max natural no. desired
	int max;
	//input the value of the max natural no.
	cout<<"Input the max natural no. value - ";
	cin>>max;
	//using a while loop, print the variable's value, starting from the max value inputted, decrementing the variable's value by 1 at the end of each iteration till it's value becomes equal to 1.
	while(max>=1)
	{
		cout<<max<<" ";
		max--;
	}
	//That's all folks!
	return 0;
}
