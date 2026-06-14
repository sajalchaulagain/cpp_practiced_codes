// WAP using single inheritance find the area of rectangle.

#include<iostream>
using namespace std;

class rectangle{
    protected:
        int l, b;

    public:
        void input(){
            cout<<"Enter length : ";
            cin>>l;
            cout<<"Enter breadth : ";
            cin>>b;
        }
};

class area: public rectangle{
    public:
        void result(){
            cout<<"Area of rectangle is : "<<l*b<<endl;
        }
};

int main(){
    area rec;
    rec.input();
    rec.result();
    return 0;
}