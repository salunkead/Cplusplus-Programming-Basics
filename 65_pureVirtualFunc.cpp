// Pure virtual function and abstract class
#include <iostream>
using namespace std;
class shape
{
public:
    // pure virtual function
    virtual void draw() = 0; // the class which inherit shape class has to provide an implementation of this function else error will come
};
class circle : public shape
{
public:
    // implementation of the pure virtual function
    void draw()
    {
        cout << "drawing circle" << endl;
    }
};
class square : public shape
{
public:
    // implementation of the pure virtual function
    void draw()
    {
        cout << "drawing square" << endl;
    }
};
int main()
{
    // shape sh; //object of  an abstarct class cannot be created
    circle c;
    square sq;
    c.draw();
    sq.draw();
    return 0;
}

/*
1.pure virtual function is special type of virtual function that is declared in the base class but has no implementation in the base class.
2.it is maked as pure by appending '=0' to it's declarartion
3.the purpose of pure virtual function is to serve as a placeholder that must be overridden by derived class
  the derived class must override pure virtual function
4.base class:- the class containing a pure virtual function is often referred as an abstract class because it cannot be instantiated
5.derived class:- any class that inherits from the abstract class must provide an implementation for all pure virtual functions
6.abstarct class:-
  1.an abstarct class is a class that cannot be instantiated on it's own
  2.abstract class are meant to be extended bu other class,which provide implementation for the pure virtual function,turning them into non-absatrct class
  3.a class becomes abstract class when it declares at least one pure virtual function.
*/
