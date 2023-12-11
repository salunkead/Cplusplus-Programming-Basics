// Function overloading in c++
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
double add(int a, double b, double c)
{
    return a + b + c;
}

int main()
{
    cout << "this will call function int add : " << add(23, 45) << endl;
    cout << "this will call the function float add : " << add(23.56, 45.689) << endl;
    cout << "this will call the function int add with three arguments : " << add(12, 56, 85) << endl;
    cout << "this will call the function double add with one int and two double type : " << add(12, 56.3, 78.25) << endl;
    return 0;
}

/*
1.function overloading allowes you to use same function name for multiple functions with different parameters.
2.the compiler decides which function to call based on the number or type of the parameters you provide while calling function
*/
