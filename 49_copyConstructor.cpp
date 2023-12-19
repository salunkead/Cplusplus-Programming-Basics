// Copy constructor
#include <iostream>
using namespace std;
class class_name
{

public:
    int a;
    class_name() {}
    class_name(int a1)
    {
        a = a1;
    }
    class_name(class_name &obj)
    {
        cout << "Copy constructor................!" << endl;
        a = obj.a;
    }
};
int main()
{
    class_name obj1, obj2;
    obj1.a = 128;
    cout << "before copy constructor called" << endl;
    cout << "value of obj2 property is : " << obj2.a << endl; // a random value
    obj2 = class_name(obj1);                                  // property values of obj1 is copied into the obj2
    cout << "after the copy constructor called" << endl;
    cout << "value of obj2 property is : " << obj2.a << endl;
    return 0;
}

/*
1.copy constructor is a special function that makes the a copy of an object.
2.it allows you to create a new object by copying the values of the another existing object of the same type.
3.the copy constructor is invoked when you create a new object based on existing one or when you pass an object to a function by value.
4.it ensures that the new object has the same values as original one
*/
