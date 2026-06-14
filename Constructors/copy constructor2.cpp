// Create a class suden with a name age, roll, and fee using copy constructor, copy the contents of one student to another student.

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

        student(const student &obj){
            name=obj.name;
            age=obj.age;
            roll=obj.roll;
            fee=obj.fee;
        }
};