// WAP in c++ using multiple inheritance to find the multiplication of two numbers:

#include<iostream>
using namespace std;

class A{
    protected:
        int a;

    public:
        void num1(){
            cout<<"Enter first number : ";
            cin>>a;
        }
};

class B{
    protected: 
        int b;

    public:
        void num2(){
            cout<<"Enter second number : ";
            cin>>b;
        }
};

class multiply:public A, public B{
    public:
        void result(){
            cout<<"Multiplication of two number is : "<<a*b<<endl;
        }
};

int main(){
    multiply mul;
    mul.num1();
    mul.num2();
    mul.result();
    return 0;
}

// here class A and class B are parent class and class multiply is child class as in which class multiply inherit the data from class A and class B