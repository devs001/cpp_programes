#include<iostream>
using namespace std;
 void swap( int& ,int&);
main()
{
	
	int a[2][2] ;
	
	cout<<" enter four values" ; cin>> a[1][1] >> a[1][2]; cout<<"enter last two of matrix";  cin>>a[2][1]>>a[2][2];  cout<<"value of matrix are " <<a[1][1] << a[1][2];
	cout<<"\n"<<a[2][1]<<a[2][2];
	swap(a[1][2], a[2][1]);
		cout<<" now are four values" ; cout<< a[1][1] << a[1][2]; cout<<"enow last two of matrix";  cout<<"value of matrix are " <<a[1][1] << a[1][2];
	cout<<"\n"<<a[2][1]<<a[2][2];
}

  swap(int &a[1][2] ,int &a[2][1])
  {
  	int tmn;
  	a[1][2] = tmn;
  	
  	a[1][2] = a[2][1];
  	
  	a[2][1] = tmn ;
  	
  	
  	
  	
  	
  	
  	
  }
