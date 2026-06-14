// WAP in cpp to write "Hello world" to a file ram.txt.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("ram.txt");
    fout<<"Hello World";
    fout.close();
    return 0;
}