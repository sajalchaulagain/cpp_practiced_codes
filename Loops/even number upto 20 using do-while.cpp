//WAP to print all the even numbers less than or equal to 20 using do-while loop.

#include<iostream>
using namespace std;

int main(){
	int i=1;
	cout<<"All the even numbers less than or equal to 20 using do-while loop.";
	do{
		if(i%2==0){
			cout<<i<<endl;
		}
		i++;
	}while(i<=20);
	return 0;
}
