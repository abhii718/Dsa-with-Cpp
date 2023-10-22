/*
for a protected member : 

                  private derivation  protected derivation   public derivation      
private member       Not inharited      Not inharited         Not inharited
protected member       private            protected            protected
public member          public              private             protected
*/ 

#include <iostream>
using namespace std;

class Base
{
    protected:
    int a=1;
    private:
    int b=2;
    public:
    int c=3;
};
class Derived1: public Base {

// cout<<c;
 };
class Derived2: private Base { 
   

};
class Derived3: protected Base {
// cout<<b;

 };
// cout<<a;
// cout<<b;
    

int main()
{
Base b;
Derived1 d1;
Derived2 d2;
Derived3 d3;
 cout<<d1.c;
// cout<<d2.a;
// cout<<d1.c;
// cout<<d1.c;
// cout<<d1.c;
// cout<<d1.c;
// cout<<d1.c;
// cout<<d1.c;



    return 0;
}