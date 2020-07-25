#include<iostream>
using namespace std;
class cast_overloding{
	private:
		int a,b;
	public:
		cast_overloding(){
		};
		cast_overloding(int a){
			this->a=a;
			this->b=a*2;			
		};
		show_containt(){
			cout<<"a is -"<<a<<endl;
			cout<<"b is -"<<b<<endl;
		}
		int get_data_a(){
			return a;
		}
		int get_data_b(){
			return b;
		}
	operator int(){
		return a*b*3;
	}	
};

class class_converson :public cast_overloding{
	private:
		int p,q;
	public:
		class_converson(){
		};
		class_converson(cast_overloding obj){
					this->p=obj.get_data_a();
					this->q=obj.get_data_b();
		}

};


int main(){	
	int a=12;
	cast_overloding obj;	
	obj=a;
	obj.show_containt();
	class_converson objc;
	 objc=obj;
	 objc.show_containt();
	a=obj;
	cout<<"a is-  "<<a;
}



