#include<iostream>
using namespace std;
	struct mobile{
		 string name;
		int ram;
		int storage;
		int cpu_speed;
	};
	
void show_feature(mobile* s){
	
	cout<<" ram is -"<<(*s).ram<<endl;
	cout<<" name is -"<<(*s).name<<"  /e storage capicity is -"<<(*s).storage;
	
}

int main(){
	mobile sm30,*mp;
	sm30.ram=3;
	sm30.storage=32;
	sm30.name ="ffsaf";
	mp=&sm30;
	show_feature(mp);

	
}

