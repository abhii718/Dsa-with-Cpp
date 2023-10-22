#include <iostream>
using namespace std;
// forword declaration

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCampComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring function as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCampComplex(Complex, Complex);
    // Aliter : Declaring the entire calcutor class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "YOur number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCampComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 5);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is" << res << endl;
    int res1 = calc.sumCampComplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is" << res1 << endl;
    return 0;
}