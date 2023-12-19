// Constructor in derived class
#include <iostream>
using namespace std;
class multiply
{
public:
    multiply(float a, float b)
    {
        cout << "base class constructor: multiply " << a * b << endl;
    }
};
class divide : public multiply
{
public:
    divide(float a, float b) : multiply(a, b)
    {
        cout << "parent class constructor: divide " << a / b << endl;
    }
};
int main()
{
    float a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    divide d(a,b);
    return 0;
}

/*
1.we can use constructor in derived class
2.if base class constructor doesnot have any arguments then,there is no need of any constructor in derived class
3.but if there are one or more arguments in the base class constructor,derived class need to pass arguments to the base class constructor
4.if both derived and base class have constructors,base class constructor is executed first
5.syntax:
   derived_class_constructor(arg1,arg2,..):base1_class_constructor(arg1,arg2),base2_class_constructor(arg3,arg4),.
*/
