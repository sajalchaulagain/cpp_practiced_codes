// nested loop example

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= 2; j++){
			cout<<"i = "<<i<<"j = "<<j<<endl;
		}
	}
	return 0;
}
