// Template or generic template or funtion template
// a funtion which is used for integer, character and float (for all) is called generic funtion


/* 
#include<iostream>
using namespace std;

template<class T> T large( T n1, T n2)
{
    return( n1>n2)?n1:n2;
}

int main()
{
    int i1, i2;
    char c1, c2;
    float f1, f2;

    cout<<"Enter two integer value = "<<endl;
    cin>>i1>>i2;
    cout<<"Greates no. is = "<<large(i1,i2) <<endl;

    cout<<"Enter two decimal value ="<<endl;
    cin>>f1>>f2;
    cout<<"Enter two decimal is = "<<large(f1,f2) <<endl;

    cout<<"Enter two charcater value"<<endl;
    cin>>c1>>c2;
    cout<<"Gratest character is = "<<large(c1,c2) <<endl;

} */


// generic class

#include<iostream>
using namespace std;

template<class t1, class t2>
class Test
{
    t1 a;
    t2 b;

    public:
    Test(t1 x, t2 y) //constructot
    {
        a=x;
        b=y;
    }

    void show()
    {
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    }
};

int  main()
{
    Test<float,int> ob1(4.5,10);
    Test<int,char> ob2(20,'R');

    ob1.show();
    ob2.show();

}