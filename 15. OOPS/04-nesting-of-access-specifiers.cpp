// nested of access specifiers

/* 
#include <iostream>
using namespace std;

class abc
{
private:
    int a;
    void geta()
    {
        a = 10;
    }

protected:
    int b;
    void getb()
    {
        b = 20;
    }

public:
    int c;
    void getc()
    {
        c = 30;
    }

    void call()
    {
        geta();
        getb();
    }

    void output()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    abc ob;

    //ob.geta();
    //ob.getb();

    ob.getc();
    ob.output();
    ob.call();
    ob.output();

}
 */


// Memory allocation for object or program of multiple object

/* 
#include<iostream>
using namespace std;

class memory
{
    int a;
    public:

    void input(int x)
    {
        a=x;
    }

    void output()
    {
        cout<<"a ="<<a<<endl;
    }
};

int main()
{
    memory m1;
    memory m2;
    memory m3;

    m1.input(10);
    m2.input(20);
    m3.input(30);

    m1.output();
    m2.output();
    m3.output();

} */
