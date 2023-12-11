//Bitwise operators in c++
#include<iostream>
using namespace std;
int main()
{
    int a=10;// in binary 1010
    int b=12;//in binary  1100
    cout<<"Bitwise operators"<<endl;
    cout<<"bitwise AND operator & : "<<(a&b)<<endl;
    cout<<"bitwise OR operator | : "<<(a|b)<<endl;
    cout<<"bitwise XOR operator ^ : "<<(a^b)<<endl;
    cout<<"bitwise NOT operator ~ : "<<(~a)<<endl;
 return 0;
}
