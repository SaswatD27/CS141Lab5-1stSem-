#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two positive integers - ";
	cin>>a>>b;
	for(int i=a;i<=(a*b);i++)
	{
		if(i%a==0&&i%b==0)
		{		
			cout<<"LCM - "<<i;
			goto end;
		}
	}
	end:
	return 0;
}

