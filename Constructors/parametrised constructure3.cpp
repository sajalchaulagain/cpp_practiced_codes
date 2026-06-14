// WAP in c++ to find the simple interest when the value of ptr is given using paramatrised constructor

#include <iostream>
using namespace std;

class interest
{
private:
    int principle, time;
    float rate;

public:
    interest(int p, int t, float r)
    {
        principle = p;
        time = t;
        rate = r;
    }

    void display(){
        cout<<"Simple interes is : "<<(principle*time*rate)/100<<endl;
    }
};

int main(){
    int principle, time;
    float rate;

    cout<<"Enter principle : ";
    cin>>principle;
    cout<<"Enter time : ";
    cin>>time;
    cout<<"Enter rate : ";
    cin>>rate;

    interest obj(principle, time, rate);
    obj.display();
    return 0;
}