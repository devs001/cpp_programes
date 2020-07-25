#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter c  ";
	cin>>c;d=1;
	cout<<d;
	for(a=1;a<c;a++)
	{
		
		cout<<"\n";
		for(b=1;b<a;b++)
		{
			d++;
		
			cout<<d;
		}
	}
	return(0);
}

