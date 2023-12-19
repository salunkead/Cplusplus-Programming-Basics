// Virtual base class
#include <iostream>
using namespace std;
// virtual base class,single copy of name and roll no. is inherited
class Student
{
protected:
    string name;
    int roll_no;

public:
    void getStudentData(string n, int r)
    {
        name = n;
        roll_no = r;
    }
};
class Test : public virtual Student
{
protected:
    int test_marks;

public:
    void getTestMarks(int t)
    {
        test_marks = t;
    }
};
class Sports : public virtual Student
{
protected:
    int sports_marks;

public:
    void getSportsMarks(int sp)
    {
        sports_marks = sp;
    }
};
class Result : public Test, public Sports
{
public:
    float total;
    void result()
    {
        total = test_marks + sports_marks;
        cout << "Name: " << name << endl;
        cout << "Roll No. : " << roll_no << endl;
        cout << "Result: " << (total / 600.0) * 100.0 << " % " << endl;
    }
};

int main()
{
    Result r;
    int total_test_marks, total_sports_marks, roll_no;
    string name;
    cout << "Enter the name of the student" << endl;
    cin >> name;
    cout << "Enter the roll no. of the student" << endl;
    cin >> roll_no;
    cout << "Enter the total test marks out of 500" << endl;
    cin >> total_test_marks;
    cout << "Enter the total sports marks out of 100" << endl;
    cin >> total_sports_marks;
    cout << "----------------------------------------------------" << endl;
    r.getStudentData(name, roll_no);
    r.getTestMarks(total_test_marks);
    r.getSportsMarks(total_sports_marks);
    r.result();
    return 0;
}

/*
1.a virtual base class is a base class that prevents multiple instances of it's variables in the derived class when those classes inherit from common ancestor.
2.it is useful in scenarios where a class may be inherited by multiple paths in the class hierarchy,and it ensures that there is only one instance of the shared base class
*/
