#include<iostream>
using namespace std;
 void swap( int& ,int&);
main()
{
	
	int a,b,c,d ;
	
	cout<<" enter four values" ; cin >>b >> a; cout<<"enter last two of matrix";  cin>>c>>d;  cout<<"value of matrix are " <<b << a;
	cout<<"\n"<<c<<d;
	swap(a, c);
		cout<<" now are four values" ; cin>> b >> a; cout<<"enow last two of matrix";  cin>>c>>d;  cout<<"value of matrix are " <<b << a;
	cout<<"\n"<<c<<d;
}

 void swap(int& a,int& c)
  {
  	int tmn;
  	a = tmn;
  	
  	a = c;
  	
  	c = tmn ;
  	
  }
  	
  	
  	
  	
  	
  
