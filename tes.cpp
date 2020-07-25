#include<iostream>
using namespace std;
int sum(int*,int*);
int main()
{
	
	int x,y;
	x=12;
	y=13;

 cout<<sum(&x,&y);
return 0;
}
int sum(int *p1,int *p2)
{
 
 return *p1+*p2;	
}
