//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare a int variable to store integer/natural no. values and initialise it with the value 1
	int a=1;
	//using while loop, display the int variable's value if it is divisible by 2, i.e. if it is even, and increment it by 1 at the end of each iteration till it reaches the value 100, once it exceeds 100, terminate the loop
	while(a<=100)
	{
		if(a%2==0)
		cout<<a<<" ";
		a++;
	}
	//adios
	return 0;
}

