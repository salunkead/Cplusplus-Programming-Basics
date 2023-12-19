// Function template
#include <iostream>
using namespace std;
template <typename t>
t add(t a, t b)
{
    return a + b;
}
int main()
{
    // using the function template
    cout << "integer actual parameters: " << add(47, 46) << endl;
    cout << "float actual parameters: " << add(10.23, 45.63) << endl;
    return 0;
}

/*
1.template allows you to write generic code
2.template allows you to define function and classes with generic types,meaning you can use them with different data types without having to rewrite the code for specific type
3.this promotes code reuseability and flexibility
4.function template:
  1.you can create a template for function that can work with different data types
  2.instead of writing the same function for different data type like integer,float etc you can create template
  3.template says,"i'm going to work with any type you give me"
*/
