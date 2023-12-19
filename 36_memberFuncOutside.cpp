// Defining member function outside class
#include <iostream>
using namespace std;
class outside
{
    float a1, a2;

public:
    void getData(float a, float b); // declaration of the function
    void putData(void);
};
void outside::getData(float a, float b) // definition of the function
{
    a1 = a;
    a2 = b;
}
void outside::putData()
{
    cout << "a1= " << a1 << endl;
    cout << "a2= " << a2 << endl;
}
int main()
{
    outside o;
    o.getData(23.63, 54.25);
    o.putData();
    return 0;
}

/*
1.member functions can be defined
  1.inside the class
  2.outside the class
2.outside the class definition
  1. return_type class_name::function_name(arguments){}

*/
