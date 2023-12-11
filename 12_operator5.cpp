// Dot operator and Arrow operator
#include <iostream>
using namespace std;
struct sample
{
    int a;
    float b;
};
int main()
{
    sample s;
    // member access operator(.) dot operator
    s.a = 256;
    s.b = 3.14;
    cout << "a=" << s.a << endl;
    cout << "b=" << s.b << endl;
    //the arrow operator(->)
    sample* ptr=&s;
    cout<<"accessing structure member using arrow operator"<<endl;
    cout<<"a="<<ptr->a<<endl;
    cout<<"b="<<ptr->b<<endl;
    return 0;
}
