// WAP using function to print name and age.

#include<iostream>
#include<string>
using namespace std;

string printName();
int printAge();

int main(){
	cout<<"Program using function to print name and age."<<endl;
	printName();
	printAge();
	return 0;
}

string printName(){
	cout<<"Name = Sajal"<<endl;
}

int printAge(){
	cout<<"Age = 19"<<endl;
}
