// access modifier in c++
#include <iostream>
using namespace std;
class grocery
{
    string item; // here item and cost are private,cannot access from outside
    float cost;

public:
    void getData(string item1, float cost1) // this member function is public,can be accessed from outside
    {
        item = item1;
        cost = cost1;
    }
    void display()
    {
        cout << item << " worth " << cost << endl;
    }
};
int main()
{
    grocery g1, g2;
    // g1.item="maggi";  //throws error-as item and cost are private members of the class and cannot be accessed from outside
    // g1.cost=14.25;
    g1.getData("maggi", 14.25); ///format for calling member functions-> object_name.function_name(actual arguments)
    g1.display();
    g2.getData("cream milk", 33.25);
    g2.display();
    return 0;
}

/*
1.the keywords public and private are the visibility
2.the class members declared with keyword private can be accessed only from within the class
  ex: private: int a,b;
3.on the other hand,public members can be accessed from outside the class.
  ex: public: int a,b;
4.by default,all the members of the class are private in nature and it is completely hidden from outside world.
5.the variables declared inside class are called data members and functions are called member functions
6.only member functions have the access to the private data members and private member functions
*/
