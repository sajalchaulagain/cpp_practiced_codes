// wap to find the area of circle using default constructor..


#include<iostream>
#include<cmath>
using namespace std;

class area{
    private:
        int r;

    public:
        area(){
            cout<<"Enter Radius of circle : ";
            cin>>r;
            cout<<"area = "<<M_PI*r*r;
        }
        ~area() {};
};

int main(){
    area a;
        return 0;
}