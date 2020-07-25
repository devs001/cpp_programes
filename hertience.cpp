#include<iostream>
 using namespace std;

 class f
 {
 	int g,h;
 	public :
	 
	   int fol(int a,int m) 
 	{
 		
 		g = a;   	h = m;
 		
 		
 		return a+m;
 		
		 
		  	
	 }
	 
	 
 

 };
 
 
 	 class d : public f
 {
 	int j,k;
 	
 	public :
 		
 		
 		int dol(int d,int g)
 		{
 			
 			
 			j = d; 		k = g;
 			
 			return d-g;
 			
		 }
 		
 	
 };
 
 
 int main()
 {
 	
 	int g, w;
 	
 	
 	f ko1;
  			 d co2;
				  
	cout<<" enter a nuber for that ever ";
				   	
 	cin>>g;
 	
 	cout<<"  sorry to bother do it agian";
 	cin>>w;
 	  
 	    cout<<co2.fol( g, w );
 	    
 	return 9;
 }
  
