// WAP in C++ to find the factorial of a number entered through the keyboard.

#include<iostream>
using namespace std;

int main(){
	int fact,i,num;
	cout<<"Enter the number : ";
	cin>>num;
	if(num==0){
		cout<<"The factorial is : 1";
	}
	else if(num<0){
		cout<<"Factorial is not definde for negative number.";
	}
	else{
		for( i=1;i<=num;i++){
			fact*=i;
		}
		cout<<"Factorial of "<<num<<" is : 8"<<fact<<endl;
	}
	return 0;
}
