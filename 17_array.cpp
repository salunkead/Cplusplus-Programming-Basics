// Array in c++
#include <iostream>
using namespace std;
int main()
{
    // declaration and initialization of float array
    float arr[5] = {3.21, 89.36, 8.32, 1.32, 10.12};
    cout << "printing array elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "modifying some elements of array" << endl;
    arr[2] = 85.65;
    arr[4] = 32.65;
    cout<<"the modified array is as follows"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

/*
1.an array is the collection of the elements of same data type,stored in contiguous memory location
2.size of the static array is fixed at the time of declaration
*/
