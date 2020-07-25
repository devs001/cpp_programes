#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a="i am dev";
	string b="s am dev";
	
	cout<<a.find_first_of("am")<<endl;
	cout<<a.insert(2,"d")<<endl;
	cout<<a.length()<<endl;
	cout<<a.at(0)<<endl;
	cout<<strcpy(a,b);	
}


