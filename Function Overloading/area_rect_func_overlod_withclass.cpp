// Wap to find area of rectangle using function overloading with class

#include<iostream>
using namespace std;

class calculateArea{
    public: 
        int area(int length, int breadth){
            return length*breadth;
        }

        float area(float length, float breadth){
            return length*breadth;
        }
};

int main(){
    calculateArea A;
    int l1, b1;
    float l2, b2;

    cout<<"Enter length (int) : ";
    cin>>l1;
    cout<<"Enter breadth (int)  : ";
    cin>>b1;

    cout<<"Enter length (float) : ";
    cin>>l2;
    cout<<"Enter breadth (float) : ";
    cin>>b2;

    cout<<"Area of rectangle (int) : "<<A.area(l1,b1)<<endl;
    cout<<"Area of rectangle (float) : "<<A.area(l2,b2)<<endl;

    return 0;
}