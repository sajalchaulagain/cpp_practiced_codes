// WAP in cpp to display a matrix of size 2x3
#include<iostream>
using namespace std;

int main(){
    int a[2][3];
    int i,j;
    cout<<"Enter array elements\n";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"The matrix is: \n";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}