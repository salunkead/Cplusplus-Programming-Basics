/// Pointers to function
#include <iostream>
using namespace std;
void funct(int a)
{
    cout << "the value of a using function pointer: " << a << endl;
}
float divide(float a,float b){
    return a/b;
}
int main()
{
    void (*funcPtr)(int);
    funcPtr = &funct;
    funcPtr(10);
    float (*funPtr)(float,float);
    funPtr=&divide;
    cout<<"division using function pointer: "<<funPtr(10.2,5.2)<<endl;
    return 0;
}
