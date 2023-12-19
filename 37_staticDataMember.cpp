// Static data member of class
#include <iostream>
using namespace std;
class Employee
{
public:
    static int count;
    Employee()
    {
        count++;
    }
    void displayCount()
    {
        cout << "total employees are " << count << endl;
    }
};
int Employee::count; // definition of static data member
int main()
{
    Employee e1, e2, e3, e4; // all the objects m1,m2 shares static variable-single memory is allocated to static member
    e1.displayCount();
    return 0;
}

/*
1.data member of the class can be qualified as static.
2.characteristics of static data members
  1.it's default value is 0.
  2.only one copy of the member is created for entire class and is shared by all the objects of the class.no matter how many objects are created
  3.it is visible inside class but it's lifetime is the entire program.
3.definition of static data member
  data_type class_name::variable_name;
*/
