
#include <iostream>

class MyClass {
public:
    // Public member function
    void SetX(int value) {
        x = value;
    }

    // Public member function
    int GetX() {
        return x;
    }

private:
    // Private data member
    int x;
};

int main() {
    MyClass myObject;

    // Accessing the public member function to set the value
    myObject.SetX(42);

    // Accessing the public member function to get the value
    int result = myObject.GetX();

    std::cout << "The value of x is: " << result << std::endl;

    return 0;
}
