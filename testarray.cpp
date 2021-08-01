#include<iostream>
#include<unordered_set >
#include<vector>
using namespace std;

int main()
{
  int *arr=new int[20];
  cout<<"Enter array elements"<<endl;
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  cout<<"Print array elements"<<endl;
  for(int i=0;i<15;i++)
  {
    cout<<arr[i];
  }
return 0;
}
