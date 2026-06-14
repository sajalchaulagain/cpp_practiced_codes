//create a class rectangle with two data members length and breadth with parameters . wap in cpp to find the area and perimeter of a reactangle


#include<iostream>
using namespace std;

class rectangle{
    private:
        double length, breadth;
    
    public:
        void input(double length, double breadth);
        void results();
};

void rectangle::input(double l, double b){
    length = l;
    breadth = b;
}

void rectangle::results(){
    cout<<"Area of rectangle is : "<<length* breadth<<endl;
    cout<<"\n Perimetre of rectangle is : "<<2*(length+breadth);
}

int main(){
    rectangle lb;
    double length, breadth;
    cout<<"Enter Length : ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    lb.input(double length, double breadth);
    lb.results();
    return 0;
}