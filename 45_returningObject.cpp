// Returning object
#include <iostream>
using namespace std;
class object
{
    float real, img;
    friend void display(object o3);

public:
    void setData(float real1, float imaginary)
    {
        real = real1;
        img = imaginary;
    }
    object returnObj(object obj, object obj1)
    {
        object o;
        o.real = obj.real + obj1.real;
        o.img = obj.img + obj1.img;
        return o;
    }
};
void display(object o3)
{
    cout << "the addition of complex number is : " << o3.real << "+ j" << o3.img << endl;
}
int main()
{
    object o1, o2, o3;
    o1.setData(12.65, 47.52);
    o2.setData(23.54, 74.14);
    o3 = o3.returnObj(o1, o2);
    display(o3);
    return 0;
}

/*
1.function can not only receive object as an arguments but also can return object.
*/
