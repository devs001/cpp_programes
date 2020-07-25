#include<iostream>
using namespace std;
 int* gdo()
 {
 	int a;
 	a=19;
 	int* b=&a;

 	return b;
 }
 int main()
 {
 
 	cout<<*(gdo());
 	return 0;
 }
