// Union and structure in c++ and difference between them
#include <iostream>
using namespace std;
union onetype
{
    int intType;
    char charType;
    double dType;
};
struct anytype
{
    int intType;
    char charType;
    double dType;
};
int main()
{
    onetype type;
    anytype ty;
    cout << "the no. of bytes taken by union : " << sizeof(type) << endl;
    cout << "the no of bytes taken by structure : " << sizeof(ty) << endl;
    // for union
    type.intType = 128;
    type.charType = 'A';
    type.dType = 12365.25;
    cout<<"union:shared memory for all the variables"<<endl;
    cout << "intType value is : " << type.intType << endl;
    cout << "charType value is : " << type.charType << endl;
    cout << "dType value is : " << type.dType << endl;
    cout<<"----------------------------------------------"<<endl;
    // for structure
    ty.intType = 128;
    ty.charType = 'A';
    ty.dType = 12365.25;
    cout<<"structure:separate memory for each variable/memory is not shared for all the members"<<endl;
    cout << "intType value is : " << ty.intType << endl;
    cout << "charType value is : " << ty.charType << endl;
    cout << "dType value is : " << ty.dType << endl;
    return 0;
}
