#include<iostream>
#include<unordered_set >
#include<vector>
using namespace std;

/*Function for Pair code*/
vector<int> findtriplet(vector<int> &nums,int target)
{
  int sz=nums.size();

  cout<<"\nVector Size : "<<sz<<endl;

  vector<int> res;

  int start=0;
  int end=sz;
  int first,second,third;

  for(int i=0;i<sz-3;i++)
  {
    first=nums[i];
    second=nums[start];
    third = nums[end];
    while(start<=end)
    {
      if(((first+second+third)-target)>0)
      {
        end--;
      }
      else
      {
        start++;
      }
      res.push_back(first);
      res.push_back(second);
      res.push_back(third);
    }
  }
  return res;
}


/*Driver Code*/
int main()
{
  vector<int> vec = {1,2,3,4,5,6,7};
  vector<int> res=findtriplet(vec,10);
  cout<<"Numbers are :"<<endl;
  cout<<res.at(0)<< " and "<<res.at(1)<<endl;
  return 0;
}
