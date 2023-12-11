// Loops in c++ -> do-while
//code-1 loops until a negative number entered
#include <iostream>
using namespace std;
int main()
{
    int num;
    do
    {
        cout << "enter negative number to exit from do-while loop" << endl;
        cin >> num;
    } while (num > 0);
    cout << "Negative number-loop exited...!" << endl;
    return 0;
}
