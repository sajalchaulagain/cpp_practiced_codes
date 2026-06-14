// WAP in C++ to find the factorial of the number using function

#include<iostream>
using namespace std;

int fact (int n);

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n<0){
		cout<<"Factorial is not defined for negative number"<<endl;
	}
	else{
		cout<<"Factorial of "<<n<<"is : "<<fact(n)<<endl;
	}
	return 0;
}

int fact (int n){
	if (n==0 || n==1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}
