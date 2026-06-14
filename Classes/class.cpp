// create a class student with data members name, age, roll and fee. WAP in cpp to entered the data throught the keyboard and display them.

#include <iostream>
using namespace std;

class student
{
private:
    char name[20];
    int age;
    int roll;
    float fee;

public:
    void set_data();
    void display();
};

// define function outside the class.
void student::set_data()
{ // returntype then class name then scope resolution operator(::) then function.
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll: ";
    cin>>roll;
    cout<<"Enter Fee: ";
    cin >> fee;
}

void student::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Fee: "<<fee<<endl;
}
int main()
{
    student s;              //object== to access the public data from class;
    s.set_data();
    s.display();
    return 0;
}