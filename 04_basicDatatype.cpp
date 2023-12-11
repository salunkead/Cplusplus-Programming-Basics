//Basic data types in c++ and no. of bytes taken
#include <iostream>
using namespace std;
int main()
{
  int a = 12;
  float f = 3.14;
  char c = 's';
  double d = 12356.3256;
  bool bol = true;
  cout << "the no. of bytes taken by int data type is : " << sizeof(a) << endl;
  cout << "the no. of bytes taken by float data type is : " << sizeof(f) << endl;
  cout << "the no. of bytes taken by char data type is : " << sizeof(c) << endl;
  cout << "the no. of bytes taken by double data type is : " << sizeof(d) << endl;
  cout << "the no. of bytes taken by bool data type is : " << sizeof(bol) << endl;
  return 0;
}

/*
1.datatype tells the type of data a variable can hold
2.data types in c++ are classified into
  1.built-in data type:- int,float,char,double,bool
  2.user-defined data type:- struct,union,enum
  3.derived data type:- array,pointer,function
*/
