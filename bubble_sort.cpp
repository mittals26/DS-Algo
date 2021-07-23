#include<iostream>
using namespace std;

int main()
{
	int *arr=new int[5];
	int temp;
	cout<<"\nEnter Array elements.\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	/*Starts sorting*/

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	/*Print sorted array*/
	cout<<"\nSorted data"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
