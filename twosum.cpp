#include<iostream>
using namespace std;

int main()
{
	int *arr=new int[5];
	cout<<"\nEnter Array Elements\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int low=0;
	int high=4;

	int target;
	cout<<"\nEnter Target : "<<endl;
	cin>>target;

	int *res=new int[2];


	/*Changes for two sum*/
	while(low<high)
	{
		if((arr[low] + arr[high]) == target) 
		{
			res[0]=arr[low];
			res[1]=arr[high];
			cout<<"\nArray elements are : "<<res[0]<<" and "<<res[1]<<endl;
			break;
		}
		else if( arr[low] + arr[high] > target)
		{
			high--;
		}
		else 
		{
			low++;
		}
	}
	
	return 0;
}
