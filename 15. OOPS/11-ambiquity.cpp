// Ambiquity : only in Multiple inherits

#include<iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"Class A Content";
    }
};

class B
{
    public:
    void show()
    {
        cout<<"Class B content";
    }
};

class C: public A, public B
{

};

int main()
{
    // C ob;
    // ob.show();

    // error 
    // solution of Ambiquity

    C ob;

    ob.A::show(); // print Base Class
}