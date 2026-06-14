// WAP in C++ to print all the natural numbers less than  or equal to 10 using do-while. 

#include<iostream>
using namespace std;

int main(){
	int i;
	cout<<"All the natural numbers less than or equal to 10";
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	return 0;
}


// In do-while loop statement, even if the condition false it will print atleast once.
//For Example: if i put while(i>=10) , as it is worng statement but it print one statement which is (i)= 1.
