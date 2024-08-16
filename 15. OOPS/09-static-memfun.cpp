// static member funtion

/* 
#include<iostream>
using namespace std;

class box
{
    static int count;
    public:
    box()
    {
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int box :: count;

int main()
{
    box ob1, ob2, ob3, ob4, ob5;
    int z = box :: getCount();
    cout<<z;
} */


// Friend Funtion 

#include<iostream>
using namespace std;

class xyz;  // if we declare "class abc" then compiler gives an error 
class abc
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
    friend void swap(abc&, xyz&);
};

class xyz
{
    int b;
    public:

    void get(int x)
    {
        b=x;
    }

    void put()
    {
        cout<<"b= "<<b<<endl;
    }

    friend void swap(abc&, xyz&);
};


void swap(abc &m, xyz &n)
{
    int t;
    t = m.a;
    m.a = n.b;
    n.b = t;
}

int main()
{
    abc ob1;
    xyz ob2;

    ob1.input(8);
    ob2.get(10);

    ob1.output();
    ob2.put();

    cout<<"After swapping";
    swap(ob1, ob2);

    ob1.output();
    ob2.put();

}