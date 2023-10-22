// copy constructor

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout<<"The coppy constructor called!!!!!!"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "THe number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); //copy cosntructor invoked
    z1.display();
    z2=z; //copy constructor not called
    Number z3 = z;  //copy constructor called
    // z1.shoud exactly resemble z
    return 0;
}