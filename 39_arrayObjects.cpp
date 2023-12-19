// Array of objects
#include <iostream>
using namespace std;
class employee
{
    char name[30];
    int id;
    float salary;

public:
    void getDetails()
    {
        cout << "Enter the name of the employee" << endl;
        cin >> name;
        cout << "enter the empoyee id" << endl;
        cin >> id;
        cout << "Enter the salary of the employee" << endl;
        cin >> salary;
    }
    void showDetails()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "The name of the employee is " << name << endl;
        cout << "Employee id: " << id << endl;
        cout << "salary: " << salary << endl;
    }
};
int main()
{
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].getDetails();
        e[i].showDetails();
        cout << "------------------------------------" << endl;
    }

    return 0;
}
