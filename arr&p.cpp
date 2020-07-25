using namespace std;
#include<iostream>

int main(){
	
	int arr[5]={12,34,454,75,15};
	int* arrp;
	arrp=&arr[0];

	for(int i=0;i<5;i++){		
			
	
	cout<<*(arrp+i)<<endl;	
}
}

