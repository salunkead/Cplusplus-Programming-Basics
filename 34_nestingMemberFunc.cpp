// nesting of member functions
#include <iostream>
using namespace std;
class c1
{
private:
    int val;
    void Func2()
    {
        cout << "inside private function Func2" << endl;
        cout << "value of val accessed from Func2 is : " << val << endl;
    }

public:
    void getValue(int v)
    {
        val = v;
    }
    void Func1()
    {
        cout << "inside function Func1" << endl;
        Func2(); // nesting of member function
    }
};
int main()
{
    c1 c;
    c.getValue(23);
    c.Func1();
    // c.Func2()  //Throws Error:-> can not access private member function
    return 0;
}

/*

1.nesting of member function refers to the situation where one member function of a class is called from within another member function of the same class

*/
