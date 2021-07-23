#include<iostream>
#include<vector>
using namespace std;


/*Main function*/
int main()
{
vector<vector<int>> vec;

vec = {
  {1,2,3},
  {4,5,6,7},
  {8,9,10,11,12}
};

int sz1=vec.size();
cout<<"\n2D Vector Data"<<endl;
for(int i=0;i<sz1;i++)
{
  int sz2=vec[i].size();
  for(int j=0;j<sz2;j++)
  {
    cout<<"\nVector Data : "<<vec[i][j]<<",";
  }
  cout<<"\n";
}

return 0;
}
