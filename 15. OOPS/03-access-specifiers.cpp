// Nesting of access specifiers

#include<iostream>
using namespace std;

class abc {
    
    private:
    int a;

    protected:
    int b;

    public:
    int c;

    void input() {
        a=10;
        b=20;
        c=30;
    }

    void output()
    {
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
        cout<<"c ="<<c<<endl;
    }
};

int main() {

    abc ob;

    //ob.a=10;
    //ob.b=22;

    ob.c=40; // 30 will be print

    ob.output();
    ob.input(); 
    ob.output();

    // cout<<(ob.c=50);
} 