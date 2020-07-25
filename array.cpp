#include<iostream>
using namespace std;

void showin_arr_el(int* ap[1][1]){
		
	cout<<ap[1][1]<<endl;
	
}

int main(){
	
	int arr[2][2]={{23,34},{45,345}},*ap[2][2];
	ap[1][1]=&arr[1][1];
	showin_arr_el(ap[1][1]);
	
	
}


