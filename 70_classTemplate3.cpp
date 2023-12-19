// Template with default parameters
#include <iostream>
using namespace std;
template <typename t1 = int, typename t2 = float>
class class_name
{
    t1 a;
    t2 b;

public:
    class_name(t1 i, t2 j) : a(i), b(j) {}
    void add()
    {
        cout << "template with default paramters: addition " << a + b << endl;
    }
};
int main()
{
    class_name<> obj(18, 25.36); // takes default data types as int anf float
    obj.add();
    class_name<int, int> obj1(18, 25.36);
    obj1.add();

    return 0;
}

/*
1.you can use default template parameters to provide default values to for template parameters
2.this allows you to create more flexible templates that can be used with or without explicit template argument
*/
