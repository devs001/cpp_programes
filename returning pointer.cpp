#include<iostream>
using namespace std;
 int* gdo(int a)
 {
 	a++;
 	int* b=&a;

 	return b;
 }
 int main()
 {
    int j;
    cout<<"enter a value";
    cin>>j;
 	
 	cout<<*(gdo(j));
 	return 0;
 }
