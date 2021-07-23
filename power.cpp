#include <iostream>
using namespace std;

int main()
{
	int x=-1;
	int n=1;
	int d=20;
	int res=1;
    while(n>0)
    {
        res=res*x;
        cout<<"\n"<<res<<"\n";
        n--;
    }
    cout<<"\n"<<"Res1 : "<<res<<"\n";
    if(d<res) {
    res=res%d;
    }
    else if(res<0) {
        res=res+d;
    }
	cout<<"\n"<<"Res2 : "<<res<<"\n";
    return 0;
}