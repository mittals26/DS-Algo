#include<iostream>
#include<math.h>
using namespace std;
int checkbinary(int num);

int main()
{
	long binary;
	int result;

	cout<<"\nEnter Binary Number\n";
	cin>>binary;
 //binary= 1100;

	result=checkbinary(binary);
	cout<<"\nASCII Number : "<<result<<"\n";

	return 0;
}

int checkbinary(int num)
{
	int rem;
	int dec=0;
	int count=0;
	while(num!=0)
	{
		rem=num%10;
		if(rem==1)
		{
			dec=dec+pow(2,count);
		}
		num=num/10;
		count=count+1;
	}
	return dec;
}