// Pointer to objects //(a+jb)*(a1+jb1)=a*a1+a*b1j+b*a1j-b*b1
#include <iostream>
using namespace std;
class complex
{
    float real, img;

public:
    complex() {}
    complex(float a, float b) : real(a), img(b)
    {
        cout << "complex no. is : " << real << " +j " << img << endl;
    }
    void complexMultiplicatiion(complex c1, complex c2)
    {
        float re, im;
        re = c1.real * c2.real - c1.img * c2.img;
        im = c1.real * c2.img + c1.img * c2.real;
        cout << "the complex number multiplication is : " << re << " +j " << im << endl;
    }
};
int main()
{
    complex *ptr1=new complex(1.2,2.5);
    complex *ptr2=new complex(4.5,5.6);
    ptr2->complexMultiplicatiion(*ptr1,*ptr2);
    delete ptr1;
    delete ptr2;
    return 0;
}

/*
1.we can use pointers to work with objects dynamically,allowing you to allocate and deallocate memory for objects during runtime.
2.in above example,complex is a simple class with two float numbers and a member function 
3.two pointers ptr1,ptr2 is created to hold the address of object on the heap,allocated using new operator
4.members of objects on the heap are accessed using the arrow(->) operator
5.memory for the object on the heap is deallocated using delete 
*/
