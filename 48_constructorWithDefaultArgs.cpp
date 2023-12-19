// Constructor with default arguments
#include <iostream>
using namespace std;
class Car
{
    string maker;
    string model;
    int year;

public:
    // constructor with default arguments
    Car(string m = "unknown", string mod = "unknown", int y = 0)
    {
        maker = m;
        model = mod;
        year = y;
    }
    void showCarDetails()
    {
        cout << "car maker is : " << maker << endl;
        cout << "car model is : " << model << endl;
        cout << "in the year : " << year << endl;
    }
};
int main()
{
    Car c1, c2, c3;
    c1 = Car(); // calls default constructor
    c1.showCarDetails();
    c2 = Car("swift desire");
    c2.showCarDetails();
    c3 = Car("honda", "civic", 2014);
    c3.showCarDetails();
    return 0;
}

/*
1.constructor can have default arguments which allows you to provide default values for certain parameters
*/
