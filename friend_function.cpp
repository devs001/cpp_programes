#include<iostream>
using namespace std;
class A{
	private:
		int x;
		friend class B;		
	public:
	
		void set(int a){
			x=a;
		}
		
};


class B{
	public:
	void show(A a){
		cout<<a.x;
	}
};
int main(){
	A obh;
	obh.set(12);

	B c;
	c.show(obh);

}
