// How to overload ++ operator using class (function overloading)

#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number()
    {
        n = 0;
    }
    Number(int x)
    {
        n = x;
    }
    void operator++()
    {
        n++;
    }
    void display()
    {
        cout << "value = " << n;
    }
};

int main()
{
    Number n1(15);
    ++n1;
    n1.display();
    return 0;
}