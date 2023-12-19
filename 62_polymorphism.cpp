//Polymorphism in c++ :-> run time polymorphism
#include <iostream>
using namespace std;
class base
{
public:
    virtual void greet()
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
1.it is the ability of different object to be treated as objects of common base type.
2.this allows single interface (such as function or method) to work with objects to various types and it enables code to be more flexible and reuseable
3.there are two types of polymorphism 
  1.compile time polymorphism(early binding or static binding)
   1.this achived through function overloading and operator overloading
   2.the decision about which function or operator to call is made at the compile time based on number and type of arguments.
  2.run-time polymorphism
   1.this is achived through virtual function and inheritance.
   2.the decision about which function to call is made at run-time
*/
