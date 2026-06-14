// WAP in C++ to find the sum of the digits of the number enter throught the keyboard.

#include<iostream>
using namespace std;

int main(){
	int number, sum=0;
	cout<<"Enter the numbers : ";
	cin>>number;
	while(number>0){
		int digit = number % 10;
		number/=10;
		sum+=digit;

	}
	
    cout << "Sum of digits = " << sum << endl;

    return 0;
}
