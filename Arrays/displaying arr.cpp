// An array is inilialized as [6, 9, 10, 2, 11, 13, 16, 18] of dimension 4x3 WAP in cpp to display them.

#include<iostream>
using namespace std;

int main(){
	int a[4][3] = {6,9,10,2,11,13,16,18};
	cout<<"Display array:\n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<"\t\t\t";
		}
		cout<<endl;
	}
	return 0;
	
}

