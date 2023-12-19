// Multiple inheritance
#include <iostream>
using namespace std;
class electric_vehical
{
protected:
    string engine;

public:
    void setEngine1(string st)
    {
        engine = st;
    }
};
class pertol_vehical
{
protected:
    string engine1;

public:
    void setEngine2(string st)
    {
        engine1 = st;
    }
};
class vehical : public electric_vehical, public pertol_vehical
{
public:
    void showDetails()
    {
        cout << "this vehical can run on : " << engine << " or " << engine1 << endl;
    }
};
int main()
{
    vehical v;
    v.setEngine1("Electricity");
    v.setEngine2("Petrol");
    v.showDetails();
    return 0;
}
