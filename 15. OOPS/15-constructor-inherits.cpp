
// Base class default constructor in derived class construct

/* 
#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base Class default constructor"<<endl;
    }
};

class derived: public Base{
    public:
    derived()
    {
        cout<<"Derived class default constructot"<<endl;
    }

    derived(int a)
    {
        cout<<"Derived class parameterized"<<endl;
    }
};

int main()
{
    derived d;
    derived d1(10);
} */


// Base class parameterized constructor in derived

/* 
#include<iostream>
using namespace std;



class base
{
    int x;
    public:
    base(int i)
    {
        x=i;
        cout<<"Base class parameterized constructor "<<x<<endl;
    }
};


/* class derived: public base
{
    int y;
    public:
    derived(int j):base(j) // explicit
    {
        y=j;
        cout<<"Derived class parameterozed constructor "<<y<<endl;
    }
};

int main()
{
    derived ob(10);

}

// other way

class derived: public base
{
    int y;
    public:
    derived(int j, int n): base (n)// explicit
    {
        y=j;
        cout<<"Derived class parameterozed constructor "<<y<<endl;
    }
};

int main()
{
    derived ob(10,5);

} */



// Constructor in detructor order of calling

#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"Base class default constructor"<<endl;
    }

    ~base()
    {
        cout<<"Base default destructor"<<endl;
    }
};

class derived: public base
{
    public:
    derived()
    {
        cout<<"Derived class constructor"<<endl;
    }

    ~derived()
    {
        cout<<"Derived class desrtuctor"<<endl;
    }
};

int main()
{
    derived d;
}