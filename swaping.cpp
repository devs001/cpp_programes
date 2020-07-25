#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int n;
	n=a;
	a=b;
	b=n;
	
}
main()
{
	int a,b;
cout<<" enter";
cin>>a>>b;
	swap(a,b);
	cout<<"b is "<<b<<" and a "<<a;
}
