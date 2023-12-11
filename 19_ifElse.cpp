// if-else statement in c++
//code -1 To find entered number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "the number is even" << endl;
    }
    else
    {
        cout << "the number is odd" << endl;
    }
    return 0;
}

//code-2 Travel fare calculation
#include <iostream>
using namespace std;
int main()
{
    float travelDistance, Rs;
    cout << "enter the travel distance" << endl;
    cin >> travelDistance;
    if (travelDistance <= 25)
    {
        Rs = 15 * travelDistance;
        cout << "your travel fare is: " << Rs << endl;
    }
    else if (travelDistance > 25 && travelDistance <= 50)
    {
        Rs = 10 * travelDistance;
        cout << "your travel fare is: " << Rs << endl;
    }
    else
    {
        Rs = 5 * travelDistance;
        cout << "your travel fare is: " << Rs << endl;
    }
    return 0;
}
