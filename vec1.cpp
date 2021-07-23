#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(5);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(60);
	v.push_back(60);
	v.push_back(60);
	v.push_back(70);
	v.push_back(70);
	v.push_back(70);
	v.push_back(70);
	v.push_back(70);
	v.push_back(70);
	//v.push_back(70);

	int sz=v.size();
	int ca=v.capacity();
	cout<<"\nVector Size : "<<sz<<endl;
	cout<<"\nVector Capacity : "<<ca<<endl;
	return 0;

}