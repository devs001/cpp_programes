#include<iostream>
using namespace std;
int sum(void);
 int main()
{
	int s;
	s=sum();
	cout<<"s is "<<s;
	return(0);
}
int sum()
{
	int a,b,c;
	cout<<"inter the a n b"; 
	cin>>a>>b;
	c=a+b;
	return(c);
}
