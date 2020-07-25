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
	j = &h;
	cout<<"conducting test"<<j->ro;
	
	cout<<"conducting test"<<j->go;
		
		
	cout<<"conducting test"<<j->ho;
	return 0 ;
}
