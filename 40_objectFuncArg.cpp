// Passing object as a function argument
#include <iostream>
using namespace std;
class complex
{
public:
    float realpart;
    float imaginarypart;
    void complexAdd(complex c1, complex c2)
    {
        float a, b;
        a = c1.realpart + c2.realpart;
        b = c1.imaginarypart + c2.imaginarypart;
        cout << "first complex no. is: " << c1.realpart << " + j" << c1.imaginarypart << endl;
        cout << "second complex no. is: " << c2.realpart << " + j" << c2.imaginarypart << endl;
        cout << "There addition is: " << a << " + j" << b << endl;
    }
};
int main()
{
    complex c1, c2;
    cout << "Enter the real part and imaginary part of the first complex number" << endl;
    cout << "real part: " << endl;
    cin >> c1.realpart;
    cout << "imaginary part: " << endl;
    cin >> c1.imaginarypart;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Enter the real and imaginary part of second complex number" << endl;
    cout << "real part: " << endl;
    cin >> c2.realpart;
    cout << "imaginary part: " << endl;
    cin >> c2.imaginarypart;
    cout << "-------------------------------------------------------------------" << endl;
    c2.complexAdd(c1, c2);
    return 0;
}

/*
1.like any ther data type,an object may be used as an function argument
2.this can be done in  two ways
  1.a copy of entire object is passed to the function (is like pass by value)
  2.only the address of the object is passed to the function (is like pass by reference)
*/
