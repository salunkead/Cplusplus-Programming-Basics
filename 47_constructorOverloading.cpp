// Constructor overloading
#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string name;
    int empId;

public:
    Employee()  //Default constructor
    {
        name = "unknown";
        empId = 0;
    }
    Employee(string name1)
    {
        name = name1;
        empId = 697;
    }
    Employee(string name1, int id)
    {
        name = name1;
        empId = id;
    }
    void showDetails()
    {
        cout << "The name of the empoyee is : " << name << endl;
        cout << "the employee id : " << empId << endl;
    }
};
int main()
{
    Employee e1, e2("Pratik", 736), e3("Saurabh");
    e1.showDetails(); // this object will call default constructor
    e2.showDetails(); // this will call construtor with two arguments
    e3.showDetails(); // this will call constructor with one arguments
    return 0;
}

/*
1.contructor overloading involves having multiple constructor in a class with different parameter list.
*/
