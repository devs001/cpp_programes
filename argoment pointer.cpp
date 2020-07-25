using namespace std ;
#include<iostream>

 void mun( int* f[78]){
	cout<<"sqro of that nauber is "<<*f;
}
 main()
 {
 	int h[78],g,i,t;
 cout<<"	enter ";
 cin>>g; 
  int* u[78];
 for(i=1;i=78;i++)
 {
 	
 h[i]=g+i*i;

  int* u[i]=&h[i];	
 }

 mun( u[78]);

 }
