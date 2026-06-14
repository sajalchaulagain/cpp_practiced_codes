// WAP in c++ to find the area and perimeter of rectangel with argument but no return type.

#include<iostream>
using namespace std;

void area(int l, int b);
void perimetre(int l, int b);

int main(){
	int l,b;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter breadth : ";
	cin>>b;
	
	area(l, b);
	perimetre(l, b);
	return 0;
}

void area(int l, int b){
	int area = l*b;
	cout<<"Area of rectangle "<<area<<endl;
}
void perimetre(int l, int b){
	int perimetre = 2*(l+b);
	cout<<"Perimetre of rectangle is : "<<perimetre<<endl;
}

