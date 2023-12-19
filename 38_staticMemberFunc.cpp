// Static member function in c++
#include <iostream>
using namespace std;
class operation
{
public:
    // static member function to multiply two numbers
    static int multiply(int a, int b)
    {
        return a * b;
    }
    static int add(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    int r1, r2;
    // using static member function without creatng object
    r1 = operation::multiply(56, 45);
    cout << "the result of operation is " << r1 << endl;
    r2 = operation::add(56, 45);
    cout << "the result is " << r2 << endl;
    return 0;
}

/*
1.like static data member,we can have static member function
2.properties of static member function
  1.static member function can have access to other static data member or static member function declared in same class
  2.static member functon can be called by using class_name instead of object
    class_name::function_name;
*/
