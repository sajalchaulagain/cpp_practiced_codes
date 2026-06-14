// Wap to find area of rectangle using function overloading without class

#include<iostream>
using namespace std;

int area(int length, int breadth){
    return length*breadth;
}

float area(float length, float breadth){
    return length*breadth;
}

int main(){
    int l1,b1;
    float l2, b2;
    cout<<"Enter length (int) : ";
    cin>>l1;
    cout<<"Enter breadth (int) : ";
    cin>>b1;

    cout<<"Enter length (float) : ";
    cin>>l2;
    cout<<"Enter breadth (float) : ";
    cin>>b2;

    cout<<"Area of rectangle (int) : "<<area(l1, b1)<<endl;
    cout<<"Area of rectangle (float) : "<<area(l2, b2);
    return 0;
}

