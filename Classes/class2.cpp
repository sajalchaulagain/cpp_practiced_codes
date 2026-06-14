// create a class rectangle with two data members length and breadth. wap in cpp to find the area of the reactangle.

#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
        int area;
    
    public:
        void set_data();
        void result();
};

void rectangle::set_data(){
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth: ";
    cin>>breadth;
    area = length*breadth;
}

void rectangle::result(){
    cout<<"Area of rectangle is : "<<area<<endl;
}

int main(){
    rectangle ans;          //ans ==>> making an object.
    ans.set_data();
    ans.result();
    return 0;
}
