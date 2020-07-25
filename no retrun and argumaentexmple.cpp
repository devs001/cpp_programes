#include<iostream>
using namespace std;
void intrest(int,int,float);
int main()
{
	int a,b;
	float c;
	cout<<"inter the how many year ";
	cin>>a;
	cout<<"enter amout you want";
	cin>>b;
	cout<<"enter interst rate";
	cin>>c;
	intrest(a,b,c);
}
void intrest (int x,int w,float h)
{
	int d;
	d=x*w*h\100;
	cout<<" anwer is "<<d;
}
