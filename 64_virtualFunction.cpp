// Virtual function
#include <iostream>
using namespace std;
class base
{
public:
    /// virtual function
    virtual void greet()
    {
        cout << "In class base: Good Night...! " << endl;
    }
};
class derived : public base
{
public:
    // overridden function
    void greet()
    {
        cout << "In class derived : Good Night..! " << endl;
    }
};
int main()
{
    // base class object
    base bobj;
    bobj.greet(); // calls the base class greet
    /////////////
    derived dobj;
    dobj.greet(); // calls overriden function
    ////////////////////////////////
    // using base class pointer to a derived class object
    base *bptr;
    derived derivedObj;
    bptr = &derivedObj;
    bptr->greet(); // calls the overriden function in the derived class
    return 0;
}

/*
1.virtual function is a function declared in a base class that can be overridden(redefined) by a function with same name in it's derived class.
2.the keyword virtual is used to declare a function as virtual in base class
3.base class:- the class that declares a virtual function is called base class
4.derived class:- any class that inherits from the base class can provide it's own implementation of the virtual function this is called overriding
5.overriding:- when a virtual function is overriden the derived class,the version of the function in the derived class is called instead of the base class version when working with the object of derived class
6.rules for virtual function
  1.they cannot be static 
  2.they are accessed by using object pointers
  3.virtual functions can be friend of another class
  4.a virtual function might not be used in base class
*/
