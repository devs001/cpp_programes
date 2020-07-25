#include<iostream>
using namespace std;
int* swap(int *a,int *b);
int main(){
	int *pi,a=1,b=3;
	
	cout<<*swap(&a,&b);
	
}
int* swap(int *a,int *b){
	int *swap;
	swap=a;
	a=b;
	b=swap;
	
	cout<<*a<<*b<<endl;
	return a;	
}


