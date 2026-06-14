//create a class with two data members a and b. write a program in cpp using classes and objects. find the sum of two numbers.

#include<iostream>
using namespace std;

class addition{
    private:
        int a, b, summ;

    public:
        void input();
        void sum();
};

void addition::input(){
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    summ = a + b;
}

void addition::sum(){
    cout<<"The sum of two number is : "<<summ<<endl;
}

int main(){
    addition ans;            //ans is object
    ans.input();
    ans.sum();
    return 0;
}