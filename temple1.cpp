#include<iostream>
using namespace std;

template<class T,class P>
class x
{
	public:

		T a;
		P b;

	public:
		P sum();
		x()
		{
			a=0;
			b=0.0;
		}
		x(T i,P j)
		{
			a=i;
			b=j;
		}
		~x(){};
};


template<class T,class P>
P x<T,P> :: sum()
{
	return a+b;
}

int main()
{
	x<int,float> obj1;
	obj1.a=20;
	obj1.b=50.432;
	float k=obj1.sum();
	cout<<"Sum 1 : "<<k<<endl;
	return 0;
}