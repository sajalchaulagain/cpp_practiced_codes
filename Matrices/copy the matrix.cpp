// Enter the rows and column through the keyboard and copy the content of one matrix to another matrix.

#include<iostream>
using namespace std;

int main(){
    int rows, coln;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>coln;

    int matrix[10][10], copy_matrix[10][10];

    // matrix (original)
    cout<<"Enter matrix elements: ";
    for (int i=0;i<rows;i++){
        for(int j=0; j<coln;j++){
            cin>>matrix[i][j];
        }
    }

    // copy matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j<coln; j++){
            copy_matrix[i][j]=matrix[i][j];
        }
    }

    // matrix(original) displaying
    cout<<"Displaying original matrix: \n";
    for(int i=0;i<rows;i++){
        for(int j=0; j<coln; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    // copid matrix displaying
    cout<<"\n\nDisplaying copied matrix: \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<coln; j++){
            cout<<copy_matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}