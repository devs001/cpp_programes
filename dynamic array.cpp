using namespace std;
#include<iostream>
int  main(){
	int i;
	cin>>i;
	int *fo;
	fo= new int[i];
	for( int j=1;j<i+4;j++){
		fo[j]=(j**j)*2;		
	}
	
	cout<<fo[6];
	
}



