// Basic input/output in c++
#include <iostream>
using namespace std;
int main()
{
    float a, b, avg;
    cout << "enter the two numbers" << endl;
    cin >> a >> b; // reads the values from the keyboard
    avg = (a + b) / 2;
    cout << "The average of two numbers is : " << avg << endl;
}

/*
1.c++ has built-in libraries which helps us in performing input/output.in c++ sequence of bytes corresponding to input and output are known as stream
2.input stream:-data flow direction-keyboard to main memory
3.output stream:-data flow  direction-main memory to display of the computer
4. << insertion operator or put to operator
5. >> extraction operator or get from operator
6. cout is used to display the data on console or terminal
7.cin>>a>>b this statement causes program to wait for the user to type numbers a and b
8.endl is ued for inserting new line in terminal
*/
