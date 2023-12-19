// this pointer in cpp
#include <iostream>
using namespace std;
class compare
{
    int a;

public:
    compare(int j) : a(j) {}
    void display()
    {
        cout << "data : " << a << endl;
    }
    bool areEqual(compare obj)
    {
        return (this->a) == (obj.a);  //obj1.a==obj2.a
    }
};
int main()
{
    compare obj1(45);
    compare obj2(46);
    obj1.display();
    obj2.display();
    // areEqual method is called using obj1 therefore,here THIS REFERES TO OBJ1
    if (obj1.areEqual(obj2))
    {
        cout << "the value of a for obj1 and obj2 are EQUAL" << endl;
    }
    else
    {
        cout << "the value of a for obj1 and obj2 are NOT EQUAL" << endl;
    }
    return 0;
}

/*
1.this is the keyword that represents a pointer to the current instance of the class.
2.it is used within the member function to refer to the object on which the function is operating
3.this points to the object for which the member function is called
*/
