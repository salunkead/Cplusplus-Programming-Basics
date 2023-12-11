// Conditional operator in c++
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 65;
    int max;
    // conditional operator
    max = (a > b) ? a : b;
    cout << "max=" << max << endl;
    return 0;
}
