#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary nymber " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorect binary formate" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {                
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    // OOOPs  --> Classes and object
    // c++  -> initially called --> C with classes by stroustroup
    // structures had  limitation
    //             -member are public
    //             -No methods
    // -->

    // You can make classes like this also
    /* class Employee
      {
          // Class definition }
      }harry, ruhan;*/
    binary b;
    b.read();
    b.chk_bin();

    b.ones_compliment();
    b.display();

    return 0;
}