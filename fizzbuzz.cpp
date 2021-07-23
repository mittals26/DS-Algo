#include<iostream>
#include<vector>
using namespace std;


//Complete this method, don't write main
vector<string> fizzbuzz(int n)
{
	vector<string> res;
	string str;
	if(n>0)
	{
		for(int i=1;i<=n;i++)
		{
			if(i%3==0 && i%5==0)
			{
				str="FizzBuzz";
			}
			else if(i%3==0)
			{
				str = "Fizz";
			}
			else if(i%5==0)
			{
				str="Buzz";
			}
			else
			{
				str=to_string(i);
			}
			res.push_back(str);
		}
	}
	return res;
}

int main()
{
	vector<string> fizz=fizzbuzz(15);
	for(string i:fizz)
	{
		cout<<i<<",";
	}
	return 0;
}
