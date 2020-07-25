#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char d;
	cout<<" enter a n b";
	cin>>a>>b;
	cout<<"task what you want";
	cin>>d;
	if(d=='+')
	{
		int v;
		v=a+b;
		cout<<"anwer for this should be"<<v;
	}
	else if(d=='*')
	{
		cout<<"anwer for this should be"<<a*b;
		
	}
		else if(d=='/')
	{
		cout<<"anwer for this should be"<<a/b;
		
	}
 	else if(d=='-')
	{
		cout<<"anwer for this should be"<<a-b;
		
	}
	return(0);
 } 
 
