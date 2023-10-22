#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employye" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of employye is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[1].setId();
        fb[1].getId();
    }
    return 0;
}