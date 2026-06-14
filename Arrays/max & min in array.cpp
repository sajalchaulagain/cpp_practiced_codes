// WAP in cpp to find the maximuma and minimum element in an array of size 5.

#include<iostream>
using namespace std;

int main(){
	int a[5], i;
	cout<<"Enter elements : ";
	for (i=0; i<5; i++){
		cin>>a[i];
	}
	
	int max = a[0];
	int min = a[0];
	
	cout<<"find maximum and minimum. "<<endl;
	for (i=0; i<5; i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	cout<<"max = "<<max<<endl;
	cout<<"min = "<<min<<endl;
	
	return 0;
}
