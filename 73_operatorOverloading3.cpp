// Operator overloading- overloading * operator
#include <iostream>
using namespace std;
class class_name
{
    int a;

public:
    class_name() {}
    class_name(int i) : a(i) {}
    void displayA()
    {
        cout << "value of a: " << a << endl;
    }
    class_name operator*(class_name other)
    {
        return a * other.a;
    }
};
int main()
{
    class_name num1(5);
    num1.displayA();
    class_name num2(6);
    num2.displayA();
    class_name num3;
    num3 = num1 * num2;
    num3.displayA();
    return 0;
}
