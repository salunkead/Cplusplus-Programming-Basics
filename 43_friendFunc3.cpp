/// Function of one class as friend of another class
#include <iostream>
using namespace std;
class first;
class second
{
public:
    float divide(first f);
};
class first
{
    float a, b;
    friend float second::divide(first f);

public:
    void setData(float a1, float a2)
    {
        a = a1;
        b = a2;
    }
};
float second::divide(first f) // friend function must be written at last,to ensure compiler that the class first has variables a and b
{
    return f.a / f.b;
}

int main()
{
    first f;
    second s;
    f.setData(12.56, 2.5);
    cout << "the division is : " << s.divide(f) << endl;
    return 0;
}
