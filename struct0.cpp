#include <iostream>
using namespace std;
struct missele
{
	char name[8];
	int range;
	float accuracey;
	
};
main()
{
	missele i0;
	cout<<"eter name";
	cin>>i0.name;
	cout<<"enter ranger";
	cin>>i0.range;
	cin>>i0.accuracey;
	cout<<"check \n"<<i0.name<<"\t"<<i0.range<<"\t"<<i0.accuracey;
}
