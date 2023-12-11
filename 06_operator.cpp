// New operators in cpp

//code-1 when local and global variable have same name
#include <iostream>
using namespace std;
int x = 300;
int main()
{
  int x = 200;
  cout << "the value of x=" << x << endl; //when the name of local and global variable same,then inside function first preference will to local only
  return 0;
}

// code-2 the scope resolution operator
#include <iostream>
using namespace std;
int x = 300;
int main()
{
  int x = 200;
  cout << "the value of x=" << ::x << endl; //using scope resolution operator,we can access global variable when name of local ang global variables are same
  return 0;
}

// code-3 scope in main function
#include <iostream>
using namespace std;
int x = 300;
int main()
{
  int x = 200;
  {
    int x = 400;
    cout << "inside inner block" << endl;
    cout << "the value of x=" << x << endl;
    cout << "the value of x=" << ::x << endl;  //:: will always refer to global x
  }
  cout << "outside inner block" << endl;
  cout << "the value of x=" << x << endl;
  cout << "the value of x=" << ::x << endl;
  return 0;
}

/*
1.operators in c++
  ::           scope resolution operator
  delete       memory release operator
  new          memory allocation operator
  endl         new line operator
  setw()       field width operator
*/
