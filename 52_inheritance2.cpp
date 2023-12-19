// Inheritance in c++ :-> privately inheriting members of the parent class
#include <iostream>
using namespace std;
class parent
{
    int a, b;

public:
    int x1, y1;
    void getValues1(int x, int y)
    {
        a = x;
        b = y;
    }
    void getValues2(int a1, int a2)
    {
        x1 = a1;
        y1 = a2;
    }
};
class child : private parent
{
    int result;

public:
    void multiply()
    {
        // result=a*b;  //private members of the parent class are never inherited in child class
        result = x1 * y1;
        cout << "the result is : " << result << endl;
    }
};
int main()
{
    int a, b;
    child c1;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    c1.getValues2(a, b);  ///error- all the public members of the parent becomes private members of the child class
    c1.multiply();
    return 0;
}

/*
1.inheritance:-it is a concept that allows a new class(called derived class or child class) to inherit properties and behaviors from an existing class(called base class or parent class)
2.syntax:
  class child_clas_name:visibility_mode parent_class_name{};
3.visibility modes are public or private.the default visibility mode is private
4.if the visibility mode is public then the public members of the parent class becomes public members of the child class
5.if the visibility mode is private then the public members of the parent class becomes private members of the child class
6.private members of base class will never becomes members of the child class.
*/
