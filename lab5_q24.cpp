//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare a char variable and initialise it with the value 'a'
	char ch='a';
	//using a while loop display the variable's value and increment it by 1 till it is equal to 'z', once it goes beyond 'z'(i.e. the char variable's value's ASCII value exceeds that of 'z'), terminate the loop
	while(ch>='a'&&ch<='z')
	{
		cout<<ch<<" ";
		ch++;
	}
	//That's all folks
	return 0;
}
