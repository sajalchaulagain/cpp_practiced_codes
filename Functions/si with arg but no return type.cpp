// find the si with argument but no return type using function.

#include<iostream>
using namespace std;

void si(int p, int t, int r){
	int si = (p*t*r)/100;
	cout<<"Simple interest is : "<<si<<endl;
}

int main(){
	int p,t,r;
	cout<<"Enter principle : ";
	cin>>p;
	cout<<"Enter time : ";
	cin>>t;
	cout<<"Enter rate : ";
	cin>>r;
	
	si(p, t, r);
	return 0;
}


