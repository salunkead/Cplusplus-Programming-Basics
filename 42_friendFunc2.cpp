// Member function of one class friend of another class
#include <iostream>
using namespace std;
class second;
class first
{
    int a;

public:
    void setA(int a1) { a = a1; }
    friend int max(first, second);
};
class second
{
    int b;

public:
    void setB(int b1) { b = b1; }
    friend int max(first, second);
};
int max(first f, second s)
{
    if (f.a > s.b)
    {
        return f.a;
    }
    else
    {
        return s.b;
    }
}
int main()
{
    first f;
    second s;
    f.setA(56);
    s.setB(78);
    cout<<"the max property among class first and class second is: "<<max(f,s)<<endl;
    return 0;
}
