// Variable types based on scope
#include <iostream>
using namespace std;
int glo = 56; // global variable
void func()
{
   float r = 3.14;
   cout << "the global variable glo=" << glo << endl; // global variables can be accessed from anywhere
   cout << "the local variable of function func r=" << r << endl;
   // cout<<"the local variable of function main a="<<a<<endl;  //throws error->we cannot access local variables of other functions
}
int main()
{
   int a = 65; // local variable(defined inside main function)
   cout << "the global variable is glo=" << glo << endl;
   cout << "the local variable of the main function a=" << a << endl;
   func(); // calling function func
   // cout<<"the local variable of function func r="<<r<<endl; //throws error->cannot access local variable of function func
   return 0;
}

/*
1. a variable is a container to hold the data.
2. all the variables must be declared before they are used.
3. variables can be of any type.mainly we have following types in c++
   1.int 2.float 3.char 4.double 5.boolean
4.int a=65; means a is integer type variable which hold value 65 in a memory
5.syntax for declaring variables in c++
   1.syntax:- datatype variable_name=value;
              ex:- int num=56;
6.based on scope(means where a variable can be used/accessed),variables can be classified as
  1.local variable:it is declared inside braces of any function and can be accessed only from there.
  2.global variable:it is declared outside any function and can be accessed from anywhere.
*/
