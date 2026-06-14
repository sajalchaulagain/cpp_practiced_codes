// Example of function overloading without class

#include<iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
double sum (double a, double b);

int main(){
    cout<<sum(5,10)<<endl;
    cout<<sum(5,10,15)<<endl;
    cout<<sum(5.5, 4.5)<<endl;
    return 0;
}

int sum (int a, int b){
    return(a+b);
}

int sum (int a, int b, int c){
    return (a+b+c);
}

double sum (double a, double b){
    return (a+b);
}