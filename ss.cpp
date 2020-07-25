using namespace std;
#include<iostream>
int powerof(int y);
int y;
int main()
{
	

 cin>>y;
 
cout<< powerof(y);
	return 0;
}

int powerof(int y)
{
 y--;	
	
	if(y==1)
	{
		return 1;
	}
	return (y*powerof(y+1));
	
}
