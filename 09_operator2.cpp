// Operators in cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 2;
    // arithmatic operators
    cout << "Arithmatic operators..!" << endl;
    cout << "addition operator + : " << a + b << endl;
    cout << "substraction operator - : " << a - b << endl;
    cout << "multiplication operator * : " << a * b << endl;
    cout << "division operator / : " << a / b << endl;
    cout << "remainder operator % : " << a % b << endl;
    cout << "-------------------------------------" << endl;
    // relational operator
    cout << "Relational operator" << endl;
    cout << "greater than operator > : " << bool(a > b) << endl;
    cout << "less than operator < : " << bool(a < b) << endl;
    cout << "equality operator == : " << bool(a == b) << endl;
    cout << "not equal to operator != : " << bool(a != b) << endl;
    cout << "greater than or equal to operator >= : " << bool(a >= b) << endl;
    cout << "greater than operator <= : " << bool(a <= b) << endl;
    cout << "-------------------------------------" << endl;
    // logical operators
    cout << "logical AND operator && : " << bool(a && b) << endl;
    cout << "logical OR operator || : " << bool(a || b) << endl;
    cout << "logical NOT operator ! : " << bool(!a) << endl;
    cout << "-------------------------------------" << endl;
    // Assignment operator
    a = 50;
    cout << "assignment operator = :" << a << endl;
    cout << "+= operator :" << (a += 10) << endl; // is equivalent to a=a+10;
    cout << "-= operator :" << (a -= 10) << endl; // is equivalent to a=a-10;
    cout << "*= operator :" << (a *= 2) << endl;  // is equivalent to a=a*2;
    cout << "/= operator :" << (a /= 2) << endl;  // is equivalent to a=a/2;
    cout << "-------------------------------------" << endl;
    // increment and decrement operator
    b++;
    cout << "b++ operator : " << b << endl;
    b--;
    cout << "b-- operator : " << b << endl; 
    return 0;
}
