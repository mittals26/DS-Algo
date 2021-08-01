#include<iostream>
using namespace std;

void reverse(int *arr,int sz);
int main()
{
  int arr[]={4,5,6,7,8,9,10};

for(int i=0;i<7;i++)
{
  for(int j=i;j<7;j++)
  {
    for(int k=i;k<j;k++)
    {
      cout<<arr[k]<<",";
    }
    cout<<endl;
  }
  cout<<endl;
}
return 0;
}
