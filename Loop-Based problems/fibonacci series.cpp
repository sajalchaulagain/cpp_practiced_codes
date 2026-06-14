// WAP to print the fibonacci series upto n term using a loop.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of terms: ";
	cin>>n;
	
	int a = 0, b = 1;
	
	cout<<"Fibonacci series: ";
	for (int i = 0; i < n; i++){
		cout<<a<<" ";
		int c = a + b;
		a = b;
		b = c;
	}
	cout<<endl;
	return 0;
}
