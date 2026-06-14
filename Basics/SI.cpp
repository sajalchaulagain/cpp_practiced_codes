// WAP to fin SI if PTR is entered through the keyboard.

#include<iostream>
using namespace std;

int main(){
	float p,t,r,SI;
	cout<<"Enter principle : ";
	cin>>p;
	cout<<"Enter rate : ";
	cin>>r;
	cout<<"Enter time : ";
	cin>>t;
	SI = (p*t*r)/100;
	cout<<"Simple Interest is : "<<SI<<endl;
	return 0 ;
}
