// WAP using c++ to find the area and perimetre of circle using function with argument and return type;

#include<iostream>
using namespace std;

//float isArea(int r);
//float isPerimetre(int r);

float isArea(int r){
	return 3.14*r*r;
}

float isPerimetre(int r){
	return 2*3.14*r;
}

int main(){
	float r, result_area, result_peri;
	cout<<"Enter radius of Circle : ";
	cin>>r;
	result_area = isArea(r);
	result_peri = isPerimetre(r);
	cout<<"Area of circle is : "<<result_area<<endl;
	cout<<"Perimetre of circle is : "<<result_peri<<endl;
	return 0;
}


