//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an int variable and initialise it with the value 1, also declare an int variable to store the value of the max natural no. desired
	int a=1,max;
	//input the value of the max natural no.
	cout<<"Input the max natural no. value - ";
	cin>>max;
	//using a while loop, print the first int variable's value then increment by 1 it at the each of each cycle/iteration till it becomes equal to the max value, once the variable's value exceeds the max natural no. value, terminate the loop
	while(a<=max)
	{
		cout<<a<<" ";
		a++;
	}
	//That's all folks!
	return 0;
}
