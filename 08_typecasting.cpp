// Typecasting in cpp
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float y, ty;
    a = 86;
    b = 36;
    c = 65;
    ty = 12.65;
    y = (a + b + c) / 3;
    cout << "before typecasting result: " << y << endl;
    y = float(a + b + c) / float(3);
    cout << "after typecasting result: " << y << endl;
    cout << "typecasting ty into int data type: " << int(ty);
    return 0;
}

/*
1.typecasting is used to convert variable of one data type to other data type.
  syntax: data_type(variable/expression)
*/
