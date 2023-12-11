// Loops in c++ -> for loop
//code-1 To find entered number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number to find it is prime or not" << endl;
    cin >> num;
    if (num == 2)
    {
        cout << "Entered number is A PRIME NUMBER" << endl;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "Entered number is NOT A PRIME NUMBER" << endl;
                break;
            }
            else if (i == num - 1)
            {
                cout << "Entered number is A PRIME NUMBER" << endl;
            }
        }
    }

    return 0;
}
