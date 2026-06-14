// WAP in C++ to find the sum of two numbers using functions with argument and with written type.

#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
	int a, b, result;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	result = sum(a,b); 					//Function calling....
	cout<<"Sum is : "<<result<<endl;
	return 0;
}

//int sum(int a, int b){
//	int result;
//	result = a + b;
//	return (result);
//}

//(another step)

int sum(int a, int b){
	return a+ b;
}
