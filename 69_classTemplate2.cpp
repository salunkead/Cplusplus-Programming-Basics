// Template with multiple parameters
#include <iostream>
#include <string>
using namespace std;
template <class t1, class t2> // we can use class or typename
class class_name
{
    t1 a;
    t2 b;

public:
    class_name(t1 i, t2 j) : a(i), b(j) {}
    void display()
    {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    class_name<int, float> obj(10, 58.36);
    obj.display();
    class_name<string, char> obj1("Pratik", 'A');
    obj1.display();
    class_name<string, float> obj2("saurabh", 98.32);
    obj2.display();
    return 0;
}
