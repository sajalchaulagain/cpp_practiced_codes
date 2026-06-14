// wap to find sum of two number using default(empty) constructor

#include<iostream>
using namespace std;

class sum{
    private:
        int a, b;
    
    public:
        sum(){
            cout<<"Enter first number : ";
            cin>>a;
            cout<<"Enter second number : ";
            cin>>b;
            cout<<"sum = "<<a+b;
        }
        // ~sum(); (this is for destructor)

};

int main(){
    sum s;
    return 0;
}

// this is empty constructor. here we just make the object, 