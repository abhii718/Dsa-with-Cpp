#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    // simple(int a, int b)
    simple(int a, int b = 5)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void simple::printdata()
{
    cout << "The value of data is " << data1 << " and " << data2;
}
int main()
{
    // simple s1(1,5);
    simple s1(1);
    s1.printdata();
    return 0;
}