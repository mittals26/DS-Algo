#include<iostream>
#include<unordered_set >
#include<vector>
using namespace std;

/*Function for Pair code*/
vector<int> findpair(vector<int> &nums,int target)
{
  unordered_set<int> s1;
  int sz=nums.size();

  vector<int> res;

  int first,second;

  for(int i=0;i<sz;i++)
  {
    first=nums.at(i);
    second=target-first;
    if(s1.find(second)!=s1.end())
    {
      res.push_back(first);
      res.push_back(second);
    }
      s1.insert(first);
  }
  return res;
}


/*Driver Code*/
int main()
{
  vector<int> vec = {10,5,2,3,-6,9,11};
  vector<int> res=findpair(vec,3);
  cout<<"Numbers are :"<<endl;
  cout<<res.at(0)<< " and "<<res.at(1)<<endl;
  return 0;
}
