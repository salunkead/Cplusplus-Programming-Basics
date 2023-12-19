// Class template
#include <iostream>
using namespace std;
template <typename t>
class class_name
{
public:
    t a, b;
    class_name(t i, t j) : a(i), b(j) {}
    void showData()
    {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "--------------------------" << endl;
    }
};
int main()
{
    class_name<int> obj1(14, 25);
    class_name<float> obj2(14.25, 85.36);
    class_name<string> obj3("Pratik", "saurabh");
    class_name<double> obj4(12.658479, 74.256318);
    class_name<bool> obj5(true, false);
    class_name<char> obj6('A','j');
    obj1.showData();
    obj2.showData();
    obj3.showData();
    obj4.showData();
    obj5.showData();
    obj6.showData();
    return 0;
}
