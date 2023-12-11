//Manipulators in c++ and endl keyword
#include <iostream>
#include <iomanip> //used to use setw
using namespace std;
int main()
{
    float a, b, c;
    a = 3.14;
    b = 2.658;
    c = 5.6987;
    cout << "a= " << setw(6) << a << endl;
    cout << "b= " << setw(6) << b << endl;
    cout << "c= " << setw(6) << c << endl;
    return 0;
}

/*
1.operators in c++
  ::           scope resolution operator
  delete       memory release opertor
  new          memory allocation operator
  endl         new line operator
  setw()       field width operator

2.setw is a manipulator from the header file iomanip that stands for "set width".
  it is used is used to set the width of the field when displaying output using cout.
  this is used when you want to format the output to align columns neatly
3.setw(6) set the width of the field to 6 characters for each number.
  ex _ _ 3_ ._ 1_ 4_ 
     _ 2_ ._ 6_ 5_ 8_
4.endl is equivalent to "\n" new line character

*/
