// factorial of number without recursion

#include<iostream>
using namespace std;

long int fact_num(int num);

int main(){
	int num; 
	long int fact=1;
	cout<<"Enter the number: ";
	cin>>num;
	fact = fact_num(num);
	cout<<"Factorial : "<<fact<<endl;
	return 0;
}

long int fact_num(int num){
	long int fact = 1;
	int i;
	for (i=1; i<=num;i++){
		fact*=i;
	}
	return (fact);	
}
