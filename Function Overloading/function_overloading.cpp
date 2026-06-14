// example of compile-time polymorphesim

#include<iostream>
using namespace std;

class sum{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int add(int a, int b, int c)
        {
            return(a+b+c);
        }
        double add(double a, double b){
            return(a+b);
        }
};


int main(){
    sum s;
    cout<<"Sum = "<<s.add(10,20)<<endl;
    cout<<"Sum = "<<s.add(10, 20, 30 )<<endl;
    cout<<"Sum = "<<s.add(5.3,4.5);
    return 0;
}