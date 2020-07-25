using namespace std;
#include<iostream>
class werl;

class tpy
{
    int a,b;
    public:
    	
   void entrydt(int p,int g)
   {
    
     cout<<"enter the data for tpy\n"; 
	 cin>>p>>g;
    a=p; 	b=g;
    }
    int udct()
    {
        return a+b;

    }
  friend void hog( werl,tpy);

};

class werl
{
   	    int a,b;
    public:
    	
   void entrydw(int p,int g)
   {
    
     cout<<"enter the data for tpy\n"; 
	 cin>>p>>g;
    a=p; 	b=g;
    }
    int udcw()
    {
        return a+b;

    }

 friend void hog(werl,tpy);

};

 void hog(werl wo,tpy vo)
 
 {
 	cout<< wo.a+vo.b;
 }

int main()
{
	int s,d;
	cout<<"data for main";
	cin>>s>>d;
	
    tpy vo;
    vo.entrydt(0,0);
   cout<<vo.udct();
    werl wo;
    wo.entrydw(s,d);
    hog(wo,vo);
    return 0;

}
