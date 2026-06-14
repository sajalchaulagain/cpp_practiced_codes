// WAP to enter two numbers throught the keyboard and find addition, substraction, multiplication, division and remainder of two numbers using switch case statement.
// Make a simple calculator.
#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	int choice;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Remainder\n";
    cout << "Enter your choice: ";
    cin >> choice;

	
	switch(choice){
		case 1:
			cout<<"Addition : "<<num1 + num2;
			break;
		
		case 2:
			cout<<"Substraction : "<<num1-num2;
			break;
		
		case 3:
			cout<<"Multiplication : "<<num1 * num2;
			break;
		
		case 4:
			cout<<"Division : "<<num1/num2;
			break;
			
		case 5:
			cout<<"Remainder : "<<num1%num2;
			break;
		
		default:
			cout<<"This feature is not introduced yet!";
	}
	return 0;
}
