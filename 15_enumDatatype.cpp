// Enum data type in c++
#include <iostream>
using namespace std;
enum shape
{
    circle,    // 0
    rectangle, // 1
    square     // 2
};
void area(int a, shape s, int b = 1)
{
    float ar;
    switch (s)
    {
    case circle:
        ar = 3.14 * a * a;
        cout << "the area of the circle is : " << ar << endl;
        break;
    case rectangle:
        ar = a * b;
        cout << "the area of the rectangle is : " << ar << endl;
        break;
    case square:
        ar = a * a;
        cout << "the area of the square is : " << ar << endl;
        break;
    default:
        cout << "not a valid shape" << endl;
        break;
    }
}
int main()
{
    area(6, circle);
    area(12, rectangle, 24);
    area(13, square);
    return 0;
}

/*
1.an enum(enumeration) is a user defined data type that consists of named integer constants called enumerators
2.it provides a way to create symbolic names for sets of integer values,making code more readable
*/
