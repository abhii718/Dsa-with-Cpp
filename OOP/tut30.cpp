#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printnumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
    complex(int, int);
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex a(4, 6);           // implict call
    complex b = complex(6, 7); // Explicit call
    a.printnumber();
    b.printnumber();

    return 0;
}