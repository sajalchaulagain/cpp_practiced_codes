// Write a program to take user input for name, age and marks, and then display them.

#include<iostream>
using namespace std;

int main(){
	string name;
	int age,marks;
	cout<<"Enter your name : ";
	getline(cin,name);
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Enter your marks : ";
	cin>>marks;
	
	cout<<"Details : "<<endl;
	cout<<"Name = "<<name<<endl;
	cout<<"Age = "<<age<<endl;
	cout<<"Marks = "<<marks<<endl;
	return 0;
}
