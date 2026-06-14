// WAP using cpp to find the sum of two numbers using single inheritance.

#include<iostream>
using namespace std;

class addition{
    protected:
        int a,b;
    
    public:
        void input(){
            cout<<"Enter a :";
            cin>>a;
            cout<<"Enter b : ";
            cin>>b;
        }
};

class add: public addition{
    public:
        void display(){
            cout<<"sum = "<<a+b<<endl;
        }
};

int main(){
    add ad;
    ad.input();
    ad.display();
    return 0;
}