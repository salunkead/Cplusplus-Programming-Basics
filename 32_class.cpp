// class in c++
#include <iostream>
using namespace std;
class person
{
public:
    int age; // feature/characteristics/property/attribute
    string name;
    void getInfo(int age1, string name1)  //methods/behaviour
    {
        age = age1;
        name = name1;
    }
    void introduce()
    {
        cout << "Hi,i am " << name << " and my age is " << age << endl;
    }
};
int main()
{
    person p1, p2; //object of the class person
    p1.getInfo(23, "Rohit");
    p1.introduce();
    p2.getInfo(26, "kishan");
    p2.introduce();
    return 0;
}

/*
1.a class is like template or blueprint for creating objects
2.it defines data types with characteristics and behaviors,allowing you to create instances of that type
3.class:-a class defines the properties (attribute/data) and behaviors(functions/methods) that object of that class will have.
4.object:- an object is an instance of a class.
5.attribute:-these are the characteristics or properties of the class.ex a person might have the attribute like name,age,gender etc
6.methods:- these are the functions or behaviour associated with that class.they define what object of that class can do
   ex:- a car class might have the methods like startEngine(),drive() etc
7.all the members of the class are public by default and all the members of the class are private by default 
*/
