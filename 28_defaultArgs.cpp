// Default arguments in function
#include <iostream>
using namespace std;
float volume(float length = 1.0, float width = 1.0, float height = 1.0)
{
    return length * height * width;
}
int main()
{
    float vol;
    vol = volume();
    cout << "result when there is no argument passed : vol= " << vol << endl;
    vol = volume(10.25, 5.5, 25.3);
    cout << "result when actual arguments are passed to function : vol= " << vol << endl;
    vol = volume(12.5, 3.6);
    cout << "result when only two actual arguments are passed is : " << vol << endl;
    vol = volume(63.5);
    cout << "result when only one actual arguments are passed is : " << vol << endl;
    return 0;
}

/*
1.default argument in function is a formal parameter that has default value assigned.
2.this default value is used if the caller doesnot provide a value for the parameter.
*/
