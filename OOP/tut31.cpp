#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex()
    {
        a = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex d(4);
    d.printnumber();
    Complex e;
    e.printnumber();
    Complex c1(4, 6);
    c1.printnumber();
    return 0;
}