using namespace std;
#include<iostream>

class tpy
{
    int a,b;
    public:
    	
   void entryd(int p,int g)
   {
    
     cout<<"enter the data for tpy\n"; 
	 cin>>p>>g;
    a=p; 	b=g;
    }
    int udct()
    {
        return a+b;

    }


};
int main()
{
    tpy vo;
    vo.entryd(0,0);
   cout<<vo.udct();

    return 0;

}
