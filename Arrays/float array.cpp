// A decimal arrya of size 6 is declared, write a program in cpp to enter this data and display them.

#include<iostream>
using namespace std;

int main(){
	float a[6];
	int i;
	cout<<"Enter numbers to be displayed : ";
	for(i=0; i<6; i++){
		cin>>a[i];
	}
	
	cout<<"Displaying array elements : ";
	for(i=0; i<6; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
