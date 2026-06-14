// WAP to find the product of two number using recursion.

#include<iostream>
using namespace std;

int find_product(int a, int b);

int main(){
	int a, b, product;
	cout<<"Enter first num : ";
	cin>>a;
	cout<<"Enter second num : ";
	cin>>b;
	product = find_product(a,b);
	cout<<"Product = "<<product<<endl;
	return 0;
}

int find_product(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	else{
		return a + find_product(a , (b-1));
	}
}


// product using recursion is calculated by repeatedly adding one number until
//the second number becomes zero.
