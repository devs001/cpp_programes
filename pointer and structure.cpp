#include<iostream>
using namespace std;
	struct mobile{
		 string name;
		int ram;
		int storage;
		int cpu_speed;
	};
	


int main(){
	mobile sm30;
	sm30.ram=3;
	sm30.storage=32;
	sm30.name ="ffsaf";
	
	mobile* mp;
	mp=&sm30;
	cout<<(*mp).cpu_speed;
	
}

