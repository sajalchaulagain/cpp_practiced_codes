#include <iostream>
using namespace std;

int main() {
    int i = 2, sum = 0;
    while (i <= 20) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++; 
    }
    cout << "Sum of all the even numbers less than or equal to 20 is: " << sum << endl;
    return 0;
}
