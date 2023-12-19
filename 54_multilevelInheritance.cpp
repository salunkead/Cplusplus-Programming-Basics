/// Multilevel inheritance
#include <iostream>
using namespace std;
class grand_father
{
protected:
    string trait;

public:
    void setGrandTrait(string trt)
    {
        trait = trt;
    }
    void showGrandFatherTrait()
    {
        cout << "Grand-father class" << endl;
        cout << "Hi,my inherited traits from my father is : " << trait << endl;
        cout << "-----------------------------------------" << endl;
    }
};
class father : public grand_father
{
protected:
    string trait1;

public:
    void setfatherTrait(string st)
    {
        trait1 = st;
    }
    void showFatherTrait()
    {
        cout << "father class" << endl;
        cout << "Hi,my inherited traits from my father is : " << trait << endl;
        cout << "my own trait is : " << trait1 << endl;
        cout << "-----------------------------------------" << endl;
    }
};
class child : public father
{
protected:
    string trait2;

public:
    void setChildTrait(string st1)
    {
        trait2 = st1;
    }
    void showChildTrait()
    {
        cout << "child class" << endl;
        cout << "Hi,my inherited traits from my grand father and father are : " << trait <<" and "<<trait1 << endl;
        cout << "my own trait is : " << trait2 << endl;
        cout << "-----------------------------------------" << endl;
    }
};
int main()
{
    child c1;
    c1.setGrandTrait("Intelligence");
    c1.setfatherTrait("Discipline");
    c1.setChildTrait("Compassion");
    c1.showGrandFatherTrait();
    c1.showFatherTrait();
    c1.showChildTrait();
    return 0;
}
