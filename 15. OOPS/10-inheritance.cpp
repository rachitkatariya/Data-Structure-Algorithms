// Multiple Inheritance

/* 
#include<iostream>
using namespace std;

class shape
{
    protected:
    int height, width;
    public:
    void set_width(int w)
    {
        width = w;
    }

    void set_height(int h)
    {
        height = h;
    }
};

class paintCost
{
    public:
    int getCost(int area)
    {
        return(area*70);
    }
};

class Rectangle:public shape, public paintCost
{
    public:
    int area()
    {
        return(width, height);
    }
};

int main()
{
    Rectangle rect;
    rect.set_width(5);
    rect.set_height(5);

    int a = rect.area();
    cout<<"Area rectangle ="<<a;
    cout<<rect.getCost(a);
}
 */


// Hybrid Inheritance

/* 
#include<iostream>
using namespace std;

class arithmetic
{
    protected:
    int n1, n2;
    public:

    void getdata()
    {
        cout<<"Enter two no. ";
        cin>>n1>>n2;
    }
};

class Plus: public arithmetic
{
    protected:
    int sum;
    public:
    void add()
    {
        sum = n1 + n2;
    }
};

class Minus
{
    protected:
    int min1, min2, sub;
    public:
    void minus()
    {
        cout<<"Enter the two number ";
        cin>>min1>>min2;
        sub = min1 - min2;
    }
};

class result: public Plus, public Minus
{
    public:
    void display()
    {
        cout<<"Addition ="<<sum<<endl;
        cout<<"Difference ="<<sub<<endl;
    }
};

int main()
{
    result ob;

    ob.getdata();
    ob.add();
    ob.minus();
    ob.display();
} */
