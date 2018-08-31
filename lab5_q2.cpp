//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{	
	//declare an int array of size 3 (integers) to store values of three no.s and declare a variable to store the max value and a counter int variable
	int A[3],max,i;
	//input three int values into the array
	cout<<"INPUT THREE (INT) NUMBERS - ";
	cin>>A[0]>>A[1]>>A[2];
	//define the max value variable to be equal to the first no. using a for loop compare the no.s and make the max variable equal to the max value after every iteration (if the no.s are equal then the max value will be the equal numerical value in question)
	for(max=A[0],i=0;i<3;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	//display the max value
	cout<<"MAX VALUE - "<<max;
	//That's all folks!
	return 0;
}

