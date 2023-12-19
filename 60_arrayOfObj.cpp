// Array of objects using pointers
#include <iostream>
using namespace std;
class array
{
    int data;

public:
    void setData(int j)
    {
        data = j;
    }
    void display()
    {
        cout << "the value of data: " << data << endl;
    }
};
int main()
{
    array *ptr = new array[5];
    ptr->setData(50);
    (ptr + 1)->setData(45);
    (ptr + 2)->setData(47);
    (ptr + 3)->setData(60);
    (ptr + 4)->setData(14);
    for (int i = 0; i < 5; i++)
    {
        ptr[i].display();
    }

    return 0;
}
