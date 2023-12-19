// Initialization list in constructor
#include <iostream>
using namespace std;
class example
{
    int a, b;
public:
    example(int x1, int y1) : a(x1), b(y1) {}
    void display()
    {
        cout << "the value of a and b are : " << a << " " << b << endl;
    }
};
int main()
{
    example e1(14, 54);
    e1.display();
    return 0;
}

/*
1.the variables which is declared first will get initialized first
*/
