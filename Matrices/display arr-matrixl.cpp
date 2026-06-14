//Enter the rows and column throught the keyboard and display matrix.

#include<iostream>
using namespace std;

int main(){
	int rows, colns;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	cout<<"Enter the number of columns: ";
	cin>>colns;
	
	int matrix[10][10];
	
	cout<<"Enter elements of matrix : ";
	for(int i=0; i<rows;i++){
		for(int j=0;j<colns;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"Displaying the matrix: \n\n";
	for(int i=0;i<rows; i++){
		for(int j=0; j<colns; j++){
			cout<<matrix[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	return 0;
}
