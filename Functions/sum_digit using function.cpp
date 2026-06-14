 // WAP in cpp to find the sum of the digits entered throught the keyboard using function.
 
 #include<iostream>
 using namespace std;
 
 void sum_digit();
 
 int main(){
 	sum_digit();
 	return 0;
 }
 
 void sum_digit(){
 	int num, rem;
 	int sum=0;
 	cout<<"Enter the number : ";
 	cin>>num;
 	do{
 		rem = num%10;
 		sum = sum + rem;
 		num = num/10;
	 }while(num!=0);
	 cout<<sum<<endl;
 }
