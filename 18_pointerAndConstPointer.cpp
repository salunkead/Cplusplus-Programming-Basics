// The concept of pointers and constant pointer in c++
#include <iostream>
using namespace std;
int main()
{
    // normal pointer
    int num = 12, num1 = 24;
    int *ptr = &num;
    const int *ptr1 = &num1; // value cannot be changed through pointer
    int num3 = 32, num4 = 30;
    int *const ptr2 = &num3; // this pointer cannot point to another variable
    cout << "the address of variable num is " << ptr << endl;
    cout << "the value at address " << ptr << " is : " << *ptr << endl;
    // we can modify the content at address ptr
    *ptr = 135;
    cout << "the value at address " << ptr << " is : " << *ptr << endl;
    /////////////////////////////////////
    cout << "the address of the variable is : " << ptr1 << endl;
    //*ptr1=500; //cannot modify value through constant pointer
    num1 = 600;
    cout << "variable modified by using variable name: " << *ptr1 << endl;
    ///////////////////////////////

    cout << "value of num3 : " << *ptr2 << endl;
    *ptr2 = 52;
    num3 = 654;
    // ptr2=&num3; error
    return 0;
}

/*
1.in the above example,
  1.ptr->is the normal pointer that can be used to both read and modify the value it points to
  2.ptr1->is a constant pointer to integer.it can be used to read the value but attempt to modify the value through pointer leads to error
  3.ptr2->is constant pointer that points to integer,it can be used to read and modify the value but it's address cannot be changed to point to another variable
*/
