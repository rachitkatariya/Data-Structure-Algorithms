#include<iostream>
using namespace std;

class Abc
{
    int a,b;
    public:

    void input(int a, int b)
    {
        // garbage value

        // a=a;
        // b=b;

        // this fuction

        this->a=a;
        this->b=b;
    }

    void output()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b;
    }
};

int main()
{
    Abc ob;

    ob.input(10,20);
    ob.output();
}