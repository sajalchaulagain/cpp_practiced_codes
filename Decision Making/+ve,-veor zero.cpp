// WAP to enter any through the keyboard and check whether it is positive, negative or zero.

#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter any number : ";
	cin>>a;
	if(a>0){
		cout<<"Number is positive.";
	}
	else if(a==0){
		cout<<"Number is zero.";
	}
	else{
		cout<<"Number is negative";
	}
	return 0;
}
