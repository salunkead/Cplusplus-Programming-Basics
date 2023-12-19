// Destructor in c++
#include <iostream>
using namespace std;
class class_name
{
    int objNo;

public:
    class_name(int objId)
    {
        objNo = objId;
        cout << "object is created with object no : " << objNo << endl;
    }
    ~class_name()
    {
        cout << "object is distroyed with object no: " << objNo << endl;
    }
};
int main()
{
    class_name obj1(1);
    {
        class_name obj2(2),obj3(3);
    }
    return 0;
}

/*
1.a destructor in cpp is a special member function of a class that is responsible for cleaning up resurces(such as memory) held by an object before it goes outof scope or is explicitly deleted.
2.the destructor has same name as that of class name but it is preceded by a tilda(~)
3.a destructor doesnot have any formal arguments nor it has any return type
*/
