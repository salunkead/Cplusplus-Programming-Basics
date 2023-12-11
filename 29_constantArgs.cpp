// Function with constant parameter
#include <iostream>
using namespace std;
void constant_para(const int num)
{
    cout << "the constant parameter of the function is : " << num << endl;
    // num=num+20;  Error:- we can not modify the value of the constant parameter inside function
}
int main()
{
    int n;
    n = 12;
    constant_para(n);
    return 0;
}

/*
1.we can use const keyword to declare a function parameter as constant.
2.this means that function promises not to modify the value of the parameter
3.using constant paramter is useful for many reasons:-
  1.it assures that the function doesnot intended to modify the value of the parameter
  2.it protect us from unintentional modification of parameter
4.if we want that the a particular variable should be for read only then we go for constant parameters.
*/
