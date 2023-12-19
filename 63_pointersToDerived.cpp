// Pointers to the derived class
#include <iostream>
using namespace std;
class base
{
public:
    void greet()
    {
        cout << "In class base: Good Night...! " << endl;
    }
};
class derived : public base
{
public:
    void greet()
    {
        cout << "In class derived : Good Night..! " << endl;
    }
};
int main()
{
    base *bptr;
    derived derivedObj;
    bptr = &derivedObj;
    bptr->greet();
    return 0;
}

/*
1.base class pointer can point(can have the address of derived class) to the derived class object
2.late binding,compiler checks the type of the pointer before calling greet function
*/
