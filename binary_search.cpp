#include<iostream>
using namespace std;

void bsearch(int *arr,int sz,int num);
int main()
{
  int arr[]={4,5,6,7,8,9,10};
  int len = sizeof(arr)/sizeof(int);

  cout<<"\nArray Size : "<<len<<endl;

  bsearch(arr,len,9);

  return 0;
}

void bsearch(int *arr,int sz,int num)
{

  int mid,high,low,i;
  int flag=0;

  low=0;
  high=sz-1;

  while(low<=high)
  {
    mid=(low+high)/2;

    if(num==arr[mid])
    {
      cout<<"\nElement Found : "<<arr[mid]<<endl;
      flag=1;
      break;
    }
    else if(num<arr[mid])
    {
      high--;
    }
    else
    {
    low++;
    }
  }
  if(flag==0) {
    cout<<"Element Not Found"<<endl;
  }
}
