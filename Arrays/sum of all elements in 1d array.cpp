// WAP to find the sum of all elements in one-dimensional array.

#include<iostream>
using namespace std;

int main(){
	int n,sum;
	cout<<"Enter numbers of elements: ";
	cin>>n;
	
	int a[n];
	cout<<"Enter elements:"<<endl;
	for(int i = 0;i<n; i++){
		cin>>a[i];
		sum = sum + a[i];
	}
	cout<<"Sum of array elements = "<<sum;
	return 0;
}
