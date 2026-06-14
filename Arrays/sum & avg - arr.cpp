// WAP in cpp to find the sum and average of an array of size 6.

#include<iostream>
using namespace std;

int main(){
	int arr[6], i, sum, avg;
	cout<<"Enter arrays : ";
	for (i=0; i<6; i++){
		cin>>arr[i];
	}
	
	for (i=0; i<6; i++){
		sum += i;
	}
	
	avg = sum / 6;
	
	cout<<"sum : "<<sum<<endl;
	cout<<"Avg : "<<avg<<endl;
	
	return 0;
}
