//WAP in C++ to find the area and perimetre of rectangle using function with no argument but return type,

#include<iostream>
using namespace std;

int print_area();
int print_peri();

int main(){
	int area, perimetre;
	area = print_area();
	perimetre = print_peri();
	cout<<"Area of rectangle : "<<area<<endl;
	cout<<"Perimetre of rectangle : "<<perimetre<<endl;
	return 0;
}

int print_area(){
	int l, b, area;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter breadth : ";
	cin>>b;
	area = l*b;
	return (area);
}

int print_peri(){
	int l, b, perimetre;
	cout<<"Enter lenght : ";
	cin>>l;
	cout<<"Enter breadth : ";
	cin>>b;
	perimetre = 2*(l+b);
	return (perimetre);
}
