// Operator overloading:- overloading - operator
#include <iostream>
using namespace std;
template <typename t = int>
class complex
{
    t real, imaginary;

public:
    complex() {} // default constructor
    complex(t r, t i) : real(r), imaginary(i) {}
    // overloading the + operator
    complex operator-(complex other)
    {
        complex c3;
        c3.real = real - other.real;
        c3.imaginary = imaginary - other.imaginary;
        return c3;
    }
    void displayComplexNo(string st = "complex No. : ")
    {
        cout << st << real << " +j " << imaginary << endl;
    }
};
int main()
{
    complex c1(45, 74);
    c1.displayComplexNo();
    complex c2(96, 45);
    c2.displayComplexNo();
    complex c3;
    c3 = c1 - c2;
    c3.displayComplexNo("result: ");
    return 0;
}
