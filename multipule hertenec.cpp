#include<iostream>
using namespace std;
class a
{

		int a;
		public :
			
		void	getdata() ;
			
			
			
			
} ;

class b
{
	

		int af;
		
		public :
			
			void getput();
			 
	
} ;


void a :: getdata()
{
	cout<<" enter a number " ;
	 
	 cin>>a;
	 
}

void f :: getput()
{
	cout<<" enter another number " ;
	 
	 cin>>af;
	 
}


class c : public a,public b;
{ 
display()
{

	cout<<"a is from class "<<a <<" af from class b " <<af ;
	
	 
}

};

 int main()
 {
 	a w;
 	b m;
 	c k;
 	
 	w.getdata();
 	m.getput();
 	
 	 k.display();
 	
 	return 9;
 	you ho
 	
 }

