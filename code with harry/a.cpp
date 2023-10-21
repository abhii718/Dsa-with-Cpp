#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}