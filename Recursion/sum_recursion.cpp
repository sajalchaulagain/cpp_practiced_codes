// WPA using recursion to find the sum of two numbers.

#include<iostream>
using namespace std;

int sum_num(int a, int b);

int main(){
	int a, b, sum;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	sum = sum_num(a,b);
	cout<<"sum is : "<<sum<<endl;
	return 0;
}

int sum_num(int a, int b){
	if (b==0){ 						// this is base for recursion.
		return a; 
	}
	else{
		return sum_num(a+1, b-1);
	}
}
