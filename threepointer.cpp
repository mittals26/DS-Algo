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
	int low,high;
	int arr_size=5;
	int target;
	cout<<"\nEnter Target : "<<endl;
	cin>>target;

	int *res=new int[3];

	low=0;
	high=arr_size-1;

	/*Changes for two sum*/
	for(int i=0;i<3;i++)
	{
		low=i+1;
		while(low<high) 
		{
			if((arr[low] + arr[high]+arr[i]) == target) 
			{
				res[0]=arr[low];
				res[1]=arr[high];
				res[2]=arr[i];
				cout<<"\nElements : "<<res[0]<<"and "<<res[1]<<"and" <<res[2]<<endl;
				break;
			}
			else if( arr[i]+arr[low] + arr[high] > target)
			{
				high--;
			}
			else 
			{
				low++;
			}
		}
	}

	return 0;
}
