// write a program in cpp to transpose a matrix 3x4 (important)

#include<iostream>
using namespace std;

int main(){
    int a[3][4], transpose[4][3];
    
    cout<<"Enter the matrix element: ";
    for(int i = 0 ; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>a[i][j];
        }
    }

    // displaying before transpose
    cout<<"Displaying before transpose: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    //for transpose
    // cout<<"\nNow Transpose \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            transpose[j][i]=a[i][j];
        }
    }

    cout<<"Displaying resultant matrix: \n";
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}