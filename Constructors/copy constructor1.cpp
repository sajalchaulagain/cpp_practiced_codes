// wap to find area of rectangle using copy constructor.
// using the copy constructor copy th area of one object of class rectangle to another rectangle.

#include<iostream>
using namespace std;

class rectangle{
    private:
        int length, breadth;

    public:
        rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        
        rectangle(const rectangle &obj){
            length=obj.length;
            breadth=obj.breadth;
        }

        void display(){
            cout<<"Area = "<<length*breadth<<endl;
        }
};

int main(){
    int length, breadth;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;
    rectangle r(length, breadth);
    r.display();
    rectangle r1=r;
    r1.display();
    return 0;
}