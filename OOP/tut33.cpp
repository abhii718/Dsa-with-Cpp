#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void bankdeposit::show()
{
    cout << endl
         << "Principal amount was " << principal
         << " return value after " << years
         << " is " << returnValue << endl;
}
int main()
{
    bankdeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    b1 = bankdeposit(p, y, r);
    b1.show();
    cout << "enter the value of p y and R " << endl;
    cin >> p >> y >> R;
    b2 = bankdeposit(p, y, R);
    b2.show();

    return 0;
}
