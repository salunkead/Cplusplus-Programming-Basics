// Return by reference in c++
#include <iostream>
using namespace std;
int &change_value(int &a, int incr)
{
    a += incr;
    return a;
}
int main()
{
    int num, incr1;
    num = 5;
    incr1 = 6;
    //call the function and get the reference to the num variable
    int &result = change_value(num, incr1);
    cout <<"result is : "<<result<<endl;
    cout<<"the num is : "<<num<<endl;
    //change num variable will reflect into the result
    num+=2;
    cout <<"result is : "<<result<<endl;
    cout<<"the num is : "<<num<<endl;
    return 0;
}
