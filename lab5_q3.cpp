//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an int variable to store a no. (integer)
	int a;
	//input the numerical value
	cout<<"Enter a no. (integer) - ";
	cin>>a;
	//using equality and inequality conditions with 0, determine whether it is -ve, 0, or +ve and display the result;
	if(a<0)
	cout<<a<<" is negative.";
	else if(a>0)
	cout<<a<<" is positive.";
	else if(a==0)
	cout<<a<<" is equal to zero.";
	//adios
	return 0;
}
