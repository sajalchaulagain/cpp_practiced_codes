// WAP to find area and perimetre of rectangle using function.

#include<iostream>
using namespace std;

float area(int l, int b);
float perimetre(int l, int b);

int main(){
	int l,b;
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
	cout<<"Area of rectangle is "<<area(l,b)<<endl;
	cout<<"Perimetre of rectangle is "<<perimetre(l,b)<<endl;
	return 0;
}

float area(int l, int b){
	return l*b;
}

float perimetre(int l, int b){
	return 2*(l+b);
}
