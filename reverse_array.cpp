#include<iostream>
using namespace std;

void reverse(int *arr,int sz);
int main()
{
  int arr[]={4,5,6,7,8,9,10};
  int sz = sizeof(arr)/sizeof(int);
  cout<<"\nArray Size : "<<sz<<endl;
  reverse(arr,sz);
  cout<<"Array Reversed"<<endl;
  for(int i=0;i<sz;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}

void reverse(int *arr,int sz)
{
  int high,low;
  low=0;
  high=sz-1;
  while(low<=high)
  {
  swap(arr[low],arr[high]);
  low++;
  high--;
  }
}

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
