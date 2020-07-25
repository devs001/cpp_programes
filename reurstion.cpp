#include<iostream>
using namespace std;
 int i=1;
  double mul(long );
 int main()
 {
 	
  double a,b,c,d,h;
 	cout<<" factalioal of (enter nuber for factoral)  ";
 	cin>>a;
 	mul(a);
 	cout <<mul(a);
 	return 0;
 	
 	
 	
 }
 
  double mul( long a)
 {
   
 	if(a == 1)
 	{
 		
 		return 1;
 		
	 }
 	return a*mul(a-1);
 }
