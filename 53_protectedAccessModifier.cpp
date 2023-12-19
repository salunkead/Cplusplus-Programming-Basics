// Protected access modifier in c++
#include <iostream>
using namespace std;
class animal
{
protected:
    int age; // the protected members are inheritable but cannot be acccessed from outside
    // private:
    //   int age; //private members never inherit

public:
    void getAge(int a)
    {
        age = a;
    }
};
class dog : public animal
{
private:
    string breed;

public:
    void getBreed(string st)
    {
        breed = st;
    }
    void showDetails()
    {
        cout << "Animal is dog" << endl;
        cout << "the age of the dog is : " << age << endl; // error here if age is kept private member
        cout << "the breed of the dog is : " << breed << endl;
    }
};
int main()
{
    dog d1;
    d1.getAge(12);
    d1.getBreed("Bull dog");
    d1.showDetails();
    return 0;
}


/*
1.the protected members of the base class in public and protected derivation becomes protected members of the child class
  base class visibility   |   derived class visibility
                          |   public    private   protected
  ________________________________________________________                           
     protected            |    protected  private   protected

*/
