// WAP in c++ to find the simple interest using function with no argument no return.

#include<iostream>
using namespace std;
void simpleInterest();

int main(){
	simpleInterest();
	return 0;
}

void simpleInterest(){
	float p,t,r,si;
	cout<<"Enter principle : ";
	cin>>p;
	cout<<"Enter time : ";
	cin>>t;
	cout<<"Enter rate : ";
	cin>>r;
	
	si = (p*t*r)/100;
	
	cout<<"Simple Interest is : "<<si<<endl;
}
