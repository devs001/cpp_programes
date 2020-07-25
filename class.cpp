using namespace std;
#include<iostream>
class add
{
	int a,b,c;
	public:
		gatdata();
	int	putdata();
	void  operator +(add a){
		cout<<" boobs "<<a.a;
	}	
		
		
};

int add::gatdata()
{
	int h,m;
cout<<"enter and b";
cin>>h>>m;
a=h,
b=m;
	
}
int add::putdata()
{
	c=a*b;
	return c;
}

int main()
{
	int f;
	add g;
	g.gatdata();
	f=g.putdata();
	cout<<"c is"<<f;
	return 0;
	g.a+g.b;
	
}

