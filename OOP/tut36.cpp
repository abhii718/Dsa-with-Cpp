#include <iostream>
using namespace std;

// base class
class Employee
{
    int id;

public:
    float salary;
    Employee(int inpID)
    {
        id = 1;
        salary = 53;
    }
};
/*
// derived class
class {{derived-class -name}} : {{visibility -mode}}{{base -class-name}}
{
    class members/methods/etc;
}*/

// creating a  programer class sedrived from employee base class

class Programmer : Employee
{
    int languageCode = 9;
};
int main()
{
    Employee harry(2), rohan(5);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    return 0;
}