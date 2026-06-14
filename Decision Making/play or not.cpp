// WAP to check wehether a person is eligible to play if age criteria is 18 or more than that.

#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter age : ";
	cin>>age;
	if(age>=18){
		cout<<"You can play";
	}
	else{
		cout<<"You can't play";
	}
	return 0;
}
