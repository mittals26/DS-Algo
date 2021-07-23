#include<iostream>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	int target=0;
	int i,low,high;
	vector<vector<int>> res;
	for(i=0;i<nums.size()-2;i++)
	{
		low=i+1;
		high=nums.size();
		while(low<high)
		{
			if(nums[i]+nums[low]+nums[high] == target)
			{
				res.push_back({nums[i],nums[low],nums[high]});
			}
			else if(nums[i]+nums[low]+nums[high] > target)
			{
				high--;
			}
			else
			{
				low++;
			}
		}
	}
	return res;
}

int main()
{
vector<vector<int>> res;
vector<int> nums;
for(i=0;i<5;i++)
{
	nums.push_back();
res=threeSum(nums);
}

