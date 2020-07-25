#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"enter c  ";
	cin>>c;
	e=c;
	for(a=1;a<c;a++)
	{
		e--;
		cout<<"\n";
		for(f=e;f>=1;f--)
		{
			cout<<" ";
		}
				for(b=1;b<a;b++)
		{
		
			cout<<"*";
		}
		for(d=2;d<a;d++)
		{
			cout<<("*");
		}
	}
	return(0);
}

