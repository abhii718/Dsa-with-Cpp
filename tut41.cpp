#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = 6;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = 5;
    }
};
class derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base 1  is " << base1int << endl;
        cout << "the value of base 2  is " << base2int << endl;
        cout << "the the sum of 1 and 2 is " << base1int + base2int << endl;
    }
};
int main()
{
    derived d;
    d.set_base1int(4);
    d.set_base2int(5);
    d.show();
    return 0;
}