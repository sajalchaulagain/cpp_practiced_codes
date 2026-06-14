// WAP in C++ to find the sum of numbers entered through the keyboard until the user enter the number is zero.

#include<iostream>
using namespace std;

int main(){
	int num, sum=0;
	cout<<"Enter digits : ";
	cin>>num;
	num /=10;
	
	while(num>0){
		sum+=num%10;
		num/=10;
	}
	cout<<"Sum = "<<sum<<endl;
	return 0;
}
