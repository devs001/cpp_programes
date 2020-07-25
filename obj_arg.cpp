#include<iostream>
using namespace std;
 class sub{
 	public:
 	int a,b=3;
 		
 	
 		void set(int x){
 			a=x;
		 }
 		sub tub( sub a,sub b){
 			cout<<a.a+b.b<<endl;
 			return b
		 ;}
 };

int main(){
	sub obj1,obj2,obj3;
	obj1.set(2),obj2.set(3),obj3.set(7);
	cout<<(obj3.tub(obj1,obj2).a);
	
	
}



