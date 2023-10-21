#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count; // default value is 0 of static

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "   THE id of employee is " << id << " and this employee number " << count;
    }
    static void getcount(void)
    {
        cout << " The value of count is " << count << endl;
    }
};

int Employee ::count=1000;

int main()
{
    Employee harry, rohan, ravish;
    // harry.id=1;
    // harry.count=2;
    harry.setdata();
    harry.getdata();
    Employee ::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee ::getcount();

    ravish.setdata();
    ravish.getdata();
    Employee ::getcount();

    return 0;
}