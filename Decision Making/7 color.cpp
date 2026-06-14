// WAP enter the color throught the keyboard and print all the colors in VIBGYOR.

#include<iostream>
using namespace std;

int main(){
	char color;
	cout<<"Enter color : ";
	cin>>color;
	if(color=='v' || color=='V'){
		cout<<"Violet";
	}
	else if(color=='i' || color=='I'){
		cout<<"Indigo";
	}
	else if(color=='b' || color=='B'){
		cout<<"Blue";
	}
	else if(color=='g' || color=='G'){
		cout<<"Green";
	}
	else if(color=='y' || color=='Y'){
		cout<<"Yellow";
	}
	else if(color=='o' || color=='O'){
		cout<<"Orange";
	}
	else if(color=='r' || color=='R'){
		cout<<"Red";
	}
	else{
		cout<<"Bad choice!";
	}
	return 0;
}
