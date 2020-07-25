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
		for(f=a;f>=1;f--)
		{
			cout<<" ";
		}
				for(b=e;b>=1;b--)
		{
		
			cout<<"*";
		}
		for(d=(e-1);d>=1;d--)
		{
			cout<<("*");
		}
	}
	return(0);
}

