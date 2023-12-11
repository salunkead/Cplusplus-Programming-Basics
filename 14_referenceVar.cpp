// Reference variable in c++
#include <iostream>
using namespace std;
int main()
{
    int num = 120;
    int &alternate = num;
    cout << "displaying num using alternate name: " << alternate << endl;
    cout<<"changing the value of num to see effect on alternate"<<endl;
    num=300;
    cout << "displaying num using alternate name: " << alternate << endl;
    return 0;
}

// code-2
#include <iostream>
using namespace std;
void change_value(int value)
{
    value = 200;
}
void change_value2(int &value) //pass by reference,value and val are same now,therefore change made in one variable will reflect into other
{
    value = 200;
}
int main()
{
    int val = 300;
    change_value(val);
    cout << "the value of val: " << val << endl;
    change_value2(val);
    cout << "the value of val: " << val << endl;
    return 0;
}

/*
1.a reference variable provide alternate name for previously defined variable.
2.syntax: data_type &reference_name=variable_name;
3.previously declared variable and reference variable has same memory location with two names
*/
