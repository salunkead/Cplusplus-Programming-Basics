// The concept of namespace in c++
#include <iostream>
namespace mathop
{
    float multiply(float a, float b)
    {
        return a * b;
    }
    int add(int a, int b)
    {
        return a + b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }

}

int main()
{
    std::cout << "the addition of numbers using namespace mathop is: " << mathop::add(12, 85) << std::endl;
    std::cout << "the substraction using namespace mathop is : " << mathop::sub(654, 78) << std::endl;
    std::cout << "the multiplication of numbers using namespace mathop is: " << mathop::multiply(12, 79) << std::endl;
    std::cout << "the division using namespace mathop is : " << mathop::divide(654, 78) << std::endl;

    return 0;
}
/*
1.namespace is a way to group realted code and prevent naming conflicts.
2.it helps organize code and avoid clashes between identifiers in different parts of the program
3.namespace helps avoid naming conflicts,especially when different libraries or parts of the program uses same names for functions,variables or classes.
4.like above namespace,c++ has std namespace where cout,endl etc are defined
5.we use it by using statement 'using namespace std;'
*/
