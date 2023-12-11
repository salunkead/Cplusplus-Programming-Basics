//Array and pointer arithmatic
//code-1 Accessing array elements using pointer arithmatic
#include <iostream>
using namespace std;
int main()
{
    float arr[5] = {12.5, 6.32, 5.32, 14.2, 85.32};
    float *ptr = arr;
    cout << "accesing the elements from 0th index to last using pointer" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }
    cout << "accesing the elements from last to first using pointer" << endl;
    ptr = &arr[4];
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr - i) << endl;
    }

    return 0;
}
