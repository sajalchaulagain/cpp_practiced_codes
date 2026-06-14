// write a program in cpp to display of matrix of 4x3 with decimal number.
#include<iostream>
using namespace std;

int main(){
    float array[4][3];
    int i,j;
    cout<<"Enter array elements: \n";
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            cin>>array[i][j];
        }
    }

    cout<<"Display matrix.\n";
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            cout<<array[i][j]<<"\t\t\t";
        }
        cout<<endl;
    }
    return 0;
}
