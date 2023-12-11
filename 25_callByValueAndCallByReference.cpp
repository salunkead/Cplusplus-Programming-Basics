/// Call by value and call by reference
#include <iostream>
using namespace std;
void call_by_value(int a)
{
    a = 140;
}
void call_by_reference(int &a)
{
    a = 140;
}
int main()
{
    int num = 65;
    cout << "when we pass arguments of the function by value then the values of the actual arguments are copied into the formal arguments" << endl;
    cout << "function cannot modify the value" << endl;
    cout << "value of num before passing by value is : " << num << endl;
    call_by_value(num);
    cout << "value of num after passing by value is : " << num << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "when we pass value by reference we are actually passing the memory address(reference) of variable to a function" << endl;
    cout << "allowing it to modify the value stored at that address" << endl;
    cout << "value of num before passing by reference is : " << num << endl;
    call_by_reference(num);
    cout << "value of num after passing by reference is : " << num << endl;

    return 0;
}
