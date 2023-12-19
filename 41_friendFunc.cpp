// Friend function
#include <iostream>
using namespace std;
class frnd
{
    float a, b;

public:
    void setData(float a1, float b1)
    {
        a = a1;
        b = b1;
    }
    friend float mean(frnd f);
};
float mean(frnd f)
{
    // f.setData(10.21,74.32); //member function can also be called in friend function
    return ((f.a + f.b) / 2.0);
}

int main()
{
    frnd f1;
    float a1, a2;
    cout << "enter the value of the a1" << endl;
    cin >> a1;
    cout << "Enter the value of the a2" << endl;
    cin >> a2;
    f1.setData(a1, a2);
    cout << "the mean of numbers is : " << mean(f1) << endl;
    return 0;
}

/*
1.a friend function is a function that is not a member of a class but is granted access to the private,protected members of the class
2.it is declared within the class with the friend keyword
3.properties of friend function
  1.not in the scope of the class
  2.since it is not in the scope of the class,we cannot call it by using object of the class
  3.it is invoked like a normal function
  4.unlike member function,it cannot access members directly just by using names,it has to use object and dot operator to access any members
  5.it can be declared as public or private
  6.it has object as a formal argument
*/
