// Funtion Over loading

/* 
#include<iostream>
using namespace std;

void cat()
{
    cout<<" is emppty"<<endl;
}

void cat(int x)
{
    cout<<"Passing one argument "<<x<<" "<<endl;
}

void cat(int x, int y)
{
    cout<<"Passing two arguments "<<x<<" "<<y<<endl;
}
void cat(char x, int y)
{
    cout<<"Passing Char and integer";
}

int main()
{
    cat();
    cat(10);
    cat(10,30);
    cat('R',30);
} */


// Funtion Overriding

#include<iostream>
using namespace std;

class A 
{
    public:
    void display()
    {
        cout<<"Class A content";
    }
};

class B:public A
{
    public:
    void display()
    {
        cout<<"Class B content";
    }
};

int main()
{
    B ob;
    ob.display();
}