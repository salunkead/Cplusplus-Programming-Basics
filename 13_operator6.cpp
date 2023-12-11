// Memory management operators-new and delete
//code-1 Dynamic memory allocation for a single variable
#include <iostream>
using namespace std;
int main()
{
    // dynamically allocating memory to the variable
    int *ptr = new int;  //data_type* pointer_variable=new data_type(initial_value) ex-int *ptr=new int(100);
    float *ptr1=new float(12.65);
    // assigning the value
    *ptr = 54;
    cout << "dynamic memory allocation using new operator: ptr " << *ptr << endl;
    cout << "dynamic memory allocation using new operator: ptr1 " << *ptr1 << endl;
    cout<<"deleting the dynamically allocated memory using delete operator"<<endl;
    delete ptr;
    delete ptr1;
    return 0;
}


// code-2 Dynamic memory allocation for array
#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    cout << "displaying  elements of array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "releasing the dynamic memory using delete operator" << endl;
    delete arr;
    return 0;
}
