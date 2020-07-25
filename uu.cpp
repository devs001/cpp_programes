#include<iostream>
using namespace std;
int sum(int*,int*);
int main()
{
	
	int a,b;
cin>>a>>b;
	int *p1=&a;
		int *p2=&b;
 cout<<sum(&a,&b);

}
int sum(int *p1,int *p2)
{
 
 return *p1**p2;	
}
