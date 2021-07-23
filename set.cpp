#include<iostream>
#include<set>
using namespace std;

int main()
{
  set<int> s1;
  s1.insert(4);
  s1.insert(5);
  s1.insert(1);
  s1.insert(6);

  set<int> :: iterator itr;

cout<<"\nSet Data\n";
  for(itr=s1.begin();itr!=s1.end();itr++)
  {
    cout<<*itr<<endl;
  }

/*Find element on set*/

int arr[] = {10,20,30,40,50};

set<int> s2;
for(int i=0;i<5;i++)
{
  s2.insert(arr[i]);
}

if(s2.find(140)!=s2.end())
{
cout<<"Found"<<endl;
}
else
{
cout<<"Not Found"<<endl;
}  return 0;
}
