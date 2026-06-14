// WAP to find the sum of two matrix of size 2x3

#include<iostream>
using namespace std;

int main(){
    int first_arr[2][3], second_arr[2][3], sum[2][3];

    cout<<"Enter element of first matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>first_arr[i][j];
        }
    }

    cout<<"\nEnter elements of second matrix: ";
    for (int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>second_arr[i][j];
        }
    }

    // for sum
    for(int i=0;i<2; i++){
        for(int j=0;j<3;j++){
            sum[i][j]=first_arr[i][j] + second_arr[i][j];
        }
    }

    //print sum

    cout<<"\n\nSum of 2x3 matrix is : ";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}