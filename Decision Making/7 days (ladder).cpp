// WAP to enter the days throught the keyboard and print all the days of the week.

#include<iostream>
using namespace std;

int main(){
	int days;
	cout<<"Enter days : ";
	cin>>days;
	if(days==1){
		cout<<"Sunday";
	}
	else if(days==2){
		cout<<"Monday";
	}
	else if(days==3){
		cout<<"Tuesday";
	}
	else if(days==4){
		cout<<"Wednesday";
	}
	else if(days==5){
		cout<<"Thursday";
	}
	else if(days==6){
		cout<<"Friday";
	}
	else if(days==7){
		cout<<"Saturday";
	}
	else{
		cout<<"Wrong input.";
	}
	return 0;
}
