using namespace std ;
#include<iostream>
int main()
{
	int a[4] ;
	a[2] =1;
	a[1]=2;
	
	int *p[4];
	
	p[1]=&a[2];
	
	cout<<"TTTT"<<*(p[1]);
	
	return 0;
	
}
