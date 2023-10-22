#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34;
    }
    Employee() {}
};
class programmer :public Employee
{
public:
    programmer(int inpID)
    {
        id = inpID;
    }
    int language = 9;
    void getData()
    {           
        cout << id << endl;
    }
};
int main()
{
    Employee harry(5), rohan(4);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.language;
    cout << skillf.id<<endl;
    skillf.getData();

    return 0;

    return 0;
}