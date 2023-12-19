/// Class as a friend
#include <iostream>
using namespace std;
class first
{
    int a, b;
    friend class second;

public:
    void setData(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
};
class second
{
public:
    int multiply(first f)
    {
        return f.a * f.b;
    }
};
int main()
{
    int r;
    first f;
    second s;
    f.setData(42, 9);
    r = s.multiply(f);
    cout << "the multiplication is : " << r << endl;
    return 0;
}
