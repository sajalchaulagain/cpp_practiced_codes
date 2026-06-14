//create a class multiply with two data members num1 and num2 . wap in cpp using parameters to find the product of this two numbers using classes and objects.

#include<iostream>
using namespace std;

class multiply{
    private:
        int num1, num2;

    public:
        void input(int num1, int num2);         // this is parameters --> according to question.
        void product();
};

void multiply::input(int x, int y){         // assigning num1's value to x and num2's value to y.
    num1 = x;
    num2 = y;
}

void multiply::product(){
    cout<<"Product is : "<<num1*num2;
}

// int main(){
//     multiply obj;       //obj is object.
//     obj.input(4,5);
//     obj.product();
//     return 0;
// }

//we can write above commented code as well.

int main(){
    multiply obj;
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    obj.input(num1, num1);
    obj.product();
    return 0;
}