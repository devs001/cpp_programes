#include<iostream>
 using namespace std;
struct dim
{
	int ro;
	char ho;
	float go;
};

int main()
{
	dim h,*j;
	h.ro=12;
	h.ho='t';
	h.go=45.6;
	j.ro=&h.ro;
	cout<<"conducting test"<<*j.ro;
		j.go=&h.go;
	cout<<"conducting test"<<*j.go;
		j.ho=&h.ho;
		
	cout<<"conducting test"<<*j.ho;
	retrn lann;
}
