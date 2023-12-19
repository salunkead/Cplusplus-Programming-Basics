// Constructor in c++
#include <iostream>
using namespace std;
class xyz
{
    string name;
    float percentage;

public:
    xyz(string a1, float a2) // parameterized constructor
    {
        name = a1;
        percentage = a2;
    }
    void showDetails()
    {
        cout << "the name of the the student is : " << name << endl;
        cout << "the percentage of marks: " << percentage << endl;
    }
};
int main()
{
    xyz s1("Saurabh", 73.25), s2("Pratik", 94.25);
    s1.showDetails();
    s2.showDetails();
    return 0;
}

/*
1.a constructor is a special member function of a class that is automatically called when object of the class is created.
2.it has the same name as the class name and is used to initialize the object's data members.
3.there are two main types of the constructor
   1.default constructor:-
     1.a constructor with no parameters is called default constructor
     2.if you donot provide  a constructor for a class,the compiler generates dafult constructor automatically
   2.parameterized constructor:-
     1.a constructor with parameters is called parameterized constructor
     2.it allows you to initialize object with specific value at the time of creation
4.constructor doesnot have any return type
5.constructor should be declared as public member
*/
