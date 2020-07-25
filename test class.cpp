#include<iostream>
using namespace std;
class sqa
{
	int a,b ,c;
	public:
		garbdata()
		{
			int f,g;
			cout<<"enter c";
			cin>>f>>g;
			a=f;
			b=g;
		}
		int fun()
		{
		c=a*b;
		return(c);
		}
};
int main()
{
	int g;
	sqa o,v;
	 o.garbdata();
	 g= v.fun();
	cout<<"sda"<<g;
	return(0);
}
