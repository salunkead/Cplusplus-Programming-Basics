// Function prototyping in c++
#include <iostream>
using namespace std;
int add(int a, int b); //function prototype
int main()
{
    int r;
    r = add(14, 65);
    cout << "This is the example function prototyping" << endl;
    cout << r << endl;
    return 0;
}
int add(int a, int b) //function definition
{
    return a + b;
}

/*
1.function prototyping in c++ are declarations that provides informatin about a function before it's actual implementation.
2.this typically includes the function's name,return type,and paramtere type.
*/
