// WAP in cpp to write your name age and roll to a file example.txt

#include <iostream>
#include <fstream>
using namespace std;

// int main(){
//     ofstream fout;
//     fout.open("example.txt");
//     fout<<"Name : Sajal Chaulagain"<<endl;
//     fout<<"Age : 20 "<<endl;
//     fout<<"Roll : 21"<<endl;
//     fout.close();
//     return 0;
// }

int main()
{
    ofstream fout;
    string name;
    int age, roll;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your roll : ";
    cin >> roll;

    fout.open("example.txt");
    fout << "Name : " << name << endl;
    fout << "Age : " << age << endl;
    fout << "roll : " << roll << endl;
    fout.close();
    return 0;
}