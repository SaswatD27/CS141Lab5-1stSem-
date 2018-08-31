//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an integer variable to store a numerical (integer) value
	int a;
	//input the integer/numerical value
	cout<<"Input a number (integer) - ";
	cin>>a;
	//check divisibility with both 5 AND 11, if it is divisible by both, respond in the affirmative, else respond in the negative
	if(a%5==0&&a%11==0)
	{
		cout<<a<<" is divisible by both 5 and 11.";
	}
	else
	cout<<a<<" is not divisible by 5 and 11 both (i.e. it is not a multiple of 5x11=55).";
	//That's all folks!
	return 0;
}
