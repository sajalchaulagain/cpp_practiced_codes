// create a class student with data members name, age, roll and fee using paramaterised constructor display them.

#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int age, roll, fee;

    public:
        student(string n, int a, int r, int f){
            name = n;
            age = a;
            roll = r;
            fee = f;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Fee: "<<fee<<endl;
        }
};

int main(){
    string name;
    int age, roll, fee;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter roll : ";
    cin>>roll;
    cout<<"Enter fee : ";
    cin>>fee;

    student s(name, age, roll, fee);
    s.display();

    return 0;

}