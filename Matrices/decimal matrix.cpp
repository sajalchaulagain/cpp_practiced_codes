// enter the rows and column through the keyboard and display decimal matrix.

#include<iostream>
using namespace std;

int main(){
    int rows, column;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter column: ";
    cin>>column;

    float matrix[10][10];

    cout<<"Enter Elements : ";
    for (int i=0; i<rows; i++){
        for(int j = 0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Displaying Matrix: \n\n";
    for (int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;

}