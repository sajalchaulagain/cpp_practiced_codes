// WAP in cpp to entered the size through the keyboard and display the array.

#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size : ";
	cin>>size;
	
	int arr[10];
	
	cout<<"Enter elements : ";
	for(int i =0 ; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Displaying : ";
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	
}



