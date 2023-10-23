#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "how ar you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet();
        base1::greet();
    }
};
int main()
{
    base1 o;
    base2 p;
    o.greet(); 
    p.greet();
    derived d;
    d.greet();
    return 0;
}