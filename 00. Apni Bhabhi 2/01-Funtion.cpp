// No Argument with return value

/* 
#include<iostream>
using namespace std;

int sum();
int main()
{
    int x = sum(); // calling
}

int sum()
{
    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    int c=a+b;
    cout<<c;
}  */


// Argument with no return value


/*  
#include<iostream>
using namespace std;

void sum(int, int); // declearation
int main()
{
    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    sum(a,b);
}

void sum(int x, int y)
{
    int z = x+y;
    cout<<z;
} */


// No argument wiht no return value

#include<iostream>
using namespace std;

// void sum();
/* 
void sum()
{
    int a,b,c;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<c;
} 

int main()
{
    sum();
}
 */


// No return value with argument 

/* 
#include<iostream>
using namespace std;

class abc {
    int a,b;
    public :

    void input(int x, int y){ 
        a=x;
        b=y;
    }

    void sum() {
        int c=a+b;
        cout<<c;
    }
};

int main() {
    
    int m,n;

    abc ob;
    cout<<"Enter the two numbers";
    cin>>m>>n;

    ob.input(m,n);
    ob.sum();
} */


// wihtout function body

/* 
#include<iostream>
using namespace std;

class abc {

    public:
    int a,b;

    void sum() {
        int c=a+b;
        cout<<c;
    }
};

int main()
{
    abc x;

    cout<<"Enter the two number";
    cin>>x.a>>x.b;

    x.sum();
} */


/* 
class abc{

    abc x;
    cout<<"Enter two number";
    cin>>x.a>>x.b;

    int c = x.a + x.b;
    cout<<c;
} */


/* #include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<6; i++)
    {
        for(int j=i; j<5; j++)
        {
            cout<<"* "<<endl;
        }
    }
    cout<<endl;
} */



/* #include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=i; j<6; j++)
        cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
} */
