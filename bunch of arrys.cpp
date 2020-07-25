using namespace std;
#include<iostream>
void whil();
int main()
{
	int a[67][67],b[67][67],c,d,f,h,sum[67][67];
	
cout<<"number of row you want and the column";
cin>>c>>d;

for(f=0;f=c;f++)
{
	for(h=0;h=d;h++)
	{
		a[f][h]=f+h;
	}
}
	
for(f=0;f=c;f++)
{
	for(h=0;h=d;h++)
	{
		b[f][h]=f*h;
	}
}
	for(f=0;f=c;f++)
{
	for(h=0;h=d;h++)
	{
		sum[f][h]=b[f][h]+a[f][h];
	}
}
	for(f=0;f=c;f++)
{
	for(h=0;h=d;h++)
	{
		cout<<"answer of every combination of nubers and multiplay"<<sum[f][h];
	}

}
whil();
return 0;
}
	
void whil(){
	int w=0;
	while(w>23){
		cout<<w;
	}
}	


	
	


	
	
	
	
	


