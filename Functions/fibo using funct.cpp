// WAP to generate fibonacci series up to 10 terms using functions.

#include<iostream>
using namespace std;

int fibo(int n);

int main(){
	int n;
	cout<<"Enter the number of terms : ";
	cin>>n;
	cout<<"Fibonacci series: ";
	fibo(n);
	return 0;
	
	
}

int fibo(int n){
	int a=0, b=1;

	for(int i=0; i<n; i++){
		cout<<a<<"";
		int c = a+b;
		a = b;
		b = c;
	}
	cout<<endl;
}
