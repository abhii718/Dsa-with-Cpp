#include <iostream>
using namespace std;
// Destructor never takes an aurgment nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }
    ~num()
    {
        cout << "THis is the time when my destructor is called for object number" <<count<<endl;
        count--;
    }
};
int main()
{
    cout << "WE are inside our main funcion " << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << " entering this block" << endl;
        cout << " creating  two more object" << endl;
        num n2, n3;
        cout << "existing this block" << endl;
    }
    cout << "back to main " << endl;
    return 0;
}