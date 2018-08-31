//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an int variable to store a numerical (integer) value
	int a;
	//input a value into the int variable
	cout<<"Input a number (integer) - ";
	cin>>a;
	//check for divisibility by 2, i.e. whether it is odd or evenand display the result
	if(a%2==0)
	cout<<a<<" is even";
	else
	cout<<a<<" is odd";
	//adios
	return 0;
}

