// WAP in cpp using recursion to find the power of number.

#include<iostream>
using namespace std;

int find_power(int b, int p);

int main(){
	int b, p, power;
	cout<<"Enter the base number : ";
	cin>>b;
	cout<<"Enter the power number : ";
	cin>>p;
	
	power = find_power(b,p);
	cout<<b<<"^"<<p<<"="<<power<<endl;
	return 0;
}

int find_power(int b, int p){
	if (p == 0){
		return 1;
	}
	else{
		return b * find_power(b, p-1);
	}
}
