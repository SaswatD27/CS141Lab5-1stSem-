//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare two int variables to store two no.s
	int a,b;
	//input integer values into the variables
	cout<<"Enter two (integer) numbers - ";
	cin>>a>>b;
	//compare the two no.s and display the max value; or int the case of equality, display the same to the user
	if(a>b)
	{
		cout<<"Max value - "<<a;
	}
	else if(b>a)
	{
		cout<<"Max value - "<<b;
	}
	else if(a==b)
	{
		cout<<a<<" and "<<b<<" are equal";
	}	
	//That's all folks
	return 0;
}
