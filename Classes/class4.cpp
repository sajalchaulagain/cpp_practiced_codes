// create a class circle with data member radius. find the area and perimetrea of 5 such circles.

#include<iostream>
using namespace std;

class circle{
    private:
        double radius;
    
    public:
        void input(int i);
        void result(int i);
};

void circle::input(int i){
    cout<<"Enter radius of circle: "<<i+1<<": "<<endl;
    cin>>radius;
}

void circle::result(int i){
    double area = 3.14*radius*radius;
    double perimeter = 2*3.14*radius;
    cout<<"Area of circle "<<i+1<<" is: "<<area<<endl;
    cout<<"Perimeter of circle "<<i+1<<" is: "<<perimeter<<endl;
}

int main(){
    circle c[5];
    for(int i=0; i<5; i++){
        c[i].input(i);
    }
    cout<<"\n\n --- Results ---\n\n";
    for (int i=0; i<5; i++){
        c[i].result(i);
    }
    return 0;
}
