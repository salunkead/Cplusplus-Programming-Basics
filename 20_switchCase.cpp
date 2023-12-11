// Switch-case in c++
//Code-1 Arithmatic operation based on operator symbol enetered by user
#include <iostream>
using namespace std;
int main()
{
    float n1, n2, r;
    char operation;
    cout << "Enter the first number" << endl;
    cin >> n1;
    cout << "Enter the operation you want to perform" << endl;
    cin >> operation;
    cout << "Enter the second number" << endl;
    cin >> n2;
    switch (operation)
    {
    case '+':
        r = n1 + n2;
        cout << "the result of addition is : " << r << endl;
        break;
    case '-':
        r = n1 - n2;
        cout << "the result of substraction is : " << r << endl;
        break;
    case '*':
        r = n1 * n2;
        cout << "the result of multiplication is : " << r << endl;
        break;
    case '/':
        if (n2 > 0)
        {
            r = n1 / n2;
            cout << "the result of division is : " << r << endl;
        }
        else
        {
            cout << "division by zero is not allowed" << endl;
        }
        break;
    default:
        cout << "Enter valid operation" << endl;
        break;
    }

    return 0;
}
