// WAP using paramarised constructor to find area of recangle

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
        void display(){
            cout<<"area of rectangle is : "<<length*breadth<<endl;
        }
};

int main(){
    int length, breadth;
    cout<<"Enter Length : ";
    cin>>length;
    cout<<"Enter Breadth : ";

    rectangle obj(length, breadth);
    obj.display();
    return 0;
}