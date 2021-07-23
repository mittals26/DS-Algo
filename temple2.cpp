  
#include<iostream>
#include <type_traits>
using namespace std;

template<class T>
class run
{
	static_assert(std::is_same<T, double>::value || std::is_same<T, float>::value,"Values allowed are Double/Float");
	public:
		T t1;
		T t2;

	public:

		T pro()
		{
			return t1*t2;
		}
};

int main()
{
	float p;
	run<float> obj1;
	obj1.t1=12.5;
	obj1.t2=8.69;
	p=obj1.pro();
   
	/*run<bool> obj2;
	obj2.t1=true;
	obj2.t2=false;
	
	bool s;
	s=obj2.pro(); */
	cout<<"\nOutput 1 : "<<p<<endl;
	//cout<<"\nOutput 2 : "<<s<<endl;
	string s="Sourabh";
cout<<s.at(4)<<endl;
cout<<s.length()<<endl;
cout<<s.size()<<endl;
    return 0;
}