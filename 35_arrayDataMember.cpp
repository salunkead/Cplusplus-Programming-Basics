// Array as data member
// the array can be used as data member in class
#include <iostream>
using namespace std;
class Array
{
    int arr[5];

public:
    void setVal()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter element at index " << i << endl;
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Displaying array contents.........!" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Array a;
    a.setVal();
    a.display();
    return 0;
}
