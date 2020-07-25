#include<iostream>
using namespace std;
class sym
{
	int a,b;
	public:
		garbdata()
		{
			int s,h;
			cout<<"enter two number";
			cin>>s;
			cout<<"now second \n";
			cin>>h;
			a=h;
			b=s;
			
		}
		usedata()
		{
			cout<<"aannwwweerr"<<a+b;
		}
		friend int sum(sym)
};
int main()
{
	sum o;
	o.garbdata();
	o.usedata();
	return 0;
	
}  
