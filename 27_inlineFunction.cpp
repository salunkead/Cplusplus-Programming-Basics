/// Inline function in c++
#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int r;
    r = product(32, 5); // a*b is directly calculated here,instead of doing all the below steps in function call
    cout << "the result of the product is : " << r;
    return 0;
}

/*
1.when a function is called below steps are performed,
  1.pushing parameters:-
    1.the parameters passed to the function are pushed into the call stack
    2.the actual parameters are copied into the formal parameters of the function
  2.jump to function:-
    1.the program control jumps to the memory location where the fuction is defined and starts the execution of the function.
  3.local variable allocation:-
    1.the space for local variables of the function is allocated on the stack
  4.execution of the function body:-
    1.statements inside function body gets executed.
    2.calaculations like sum,product or other calculations
  5.returning the value:-
    1.return value is calculated and stored into the designated location.
    2.if the function doesnot return then this step is skipped
  6.cleanup:
    1.memory allocated for local variables are deallocated from stack and control returns to the point in the calling code.
  7.popping parameters:-
    1.if there are parameters passed to the function they are pooped from the stack memory.
2.inline function in c++ is function that expands(replaced) by the compiler at the point where it is called,
  instead of performing above steps
*/
