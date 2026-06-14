// Recursion is a process of calling the function itself to perform a repetative task. 
// And the function which is being called is known as recursive function.

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
	if(num == 1 || num == 0){
		return 1;
	}	
	else{
		return num*fact_num(num-1);
	}
}
