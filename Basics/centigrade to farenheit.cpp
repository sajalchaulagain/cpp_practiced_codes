// WAP to convert the temperature in centigrade to fahrenheit.

#include<iostream>
using namespace std;

int main(){
	float c,f;
	cout<<"Enter temperature in centigrade : ";
	cin>>c;
	f=(9/5*c)+32;
	cout<<"Required fahrenheit is : "<<f<<endl;
	return 0;
}
