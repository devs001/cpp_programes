#include<iostream>
using namespace std;
class A{
	public:
		int b,c;
	
		A(){
			b=45;
			c=7;					
	}
		~A(){			
		}
	void show(int s){
		cout<<b+c+s;	
	}
};
int main(){
	A *obj;
	 obj=new A;
	obj->show(45);
	delete obj; 
	int A::*ptdmb=&A::b;
	int A::*ptdmc=&A::c;
	void (A::*ptfms)(int)=&A::show;
	A obd;
	obd.*ptdmb=34;
	obd.*ptdmc=24;
	obd.show(23);
			
}
