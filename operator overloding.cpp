#include<iostream>
using namespace std;
class A{
	private:
		int a=2;
		int b=3;
	public:
		A(int Q=0,int d=0){
			a=Q;
			b=d;			
		}
		void show(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
friend A  operator+(A,A);		
};
A operator+(A obj1,A obj2){
	
	A temp;
	temp.a=obj1.a+obj2.a;
	temp.b=obj1.b+obj2.b;
	return temp;
}


int main(){
	A obj1(3,4),obj2(2,4),uh(1,12);
	uh=obj1+obj2;
	uh.show();
}
