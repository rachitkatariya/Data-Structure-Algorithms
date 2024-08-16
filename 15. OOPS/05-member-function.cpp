// Member Funtion

/* 
#include<iostream>
using namespace std;

class abc
{
    int a;
    void geta(); // decleration

    public:
    void call() // define 
    {
        geta();
    }

    void output();
};

void abc:: geta()
{
    a=10;
}

void abc::output(){
    cout<<"a = "<<a<<endl;
}

int main()
{
    abc ob;
    ob.call();
    ob.output();  
} */




// Static data memeber funtion

/* 
#include<iostream>
using namespace std;

class abc
{
    int a;
    static int b;

    public:
    void input()
    {
        b++;
        a=b;
    }

    void output()
    {
        cout<<"\n a = "<< a <<"\t    b ="<<b;
    }
};

int abc:: b;

int main()
{
    abc x,y,z;

    x.output();
    y.output();
    z.output();

    x.input();
    x.output();
    y.output();
    z.output();

    y.input();
    x.output();
    y.output();
    z.output();

    z.input();
    x.output();
    y.output();
    z.output();

    
}
 */


// 