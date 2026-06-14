// WAP in c++ to find simple intrest using function with argument and with return type.

#include<iostream>
using namespace std;

int simpleIntrest(int p, int t, int r);

int main(){
	int p, t, r, result;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"Enter Time : ";
	cin>>t;
	cout<<"Enter Rate : ";
	cin>>r;
	result = simpleIntrest(p,t,r);
	cout<<"Simple Intrest is : "<<result<<endl;
	return 0;
}

int simpleIntrest(int p, int t, int r){
	return (p*t*r)/100;
}
