// WAP in cpp to display an arry of size 5.

#include<iostream>
using namespace std;

int main(){
	int a[5], i;
	cout<<"Enter array elements : ";
	for (i=0; i<5; i++){
		cin>>a[i];
	}
	cout<<"displaying an array elements : ";
	for (i=0; i<5; i++){
		cout<<a[i];
	}
	return 0;
}
