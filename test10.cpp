#include<iostream>
using namespace std;
 	 
 int main()
 {
 	
 	int d[4];
 	int *p[3];
 	
 	d[1]=1;
 	d[2]=2;
 	d[3]=23;
 	d[4]=6;
    p[2] = &d[1];
	 p[1] = &d[3];
 	cout<<"klo\t"<<*p[1]<<"\t"<<*p[2];
    return 0;
 	
 	
 
 }
