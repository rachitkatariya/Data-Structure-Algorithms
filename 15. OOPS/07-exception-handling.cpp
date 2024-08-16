// Try, throw and catch
/* 

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    float c;
    cout<<"Enter the two numbers";
    cin>>a>>b;

    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<c;
        }
        else{
            throw b;
        }
    }
    catch(int i)
    {
        cout<<"Answer will be infinite because value of b is "<<i;
    }
} */


// Try with multiple catches

/* 
#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x>0)
        throw x;
        else
        throw 'B';
    }


    catch(int i)
    {
        cout<<"Catching an integer that is "<<i<<endl;
    }

    catch(char c)
    {
        cout<<"Catching an character that is "<<c;
    }
}

int main()
{
    test(10);
    test(0);
} 

*/

// All-rounder

#include<iostream>
using namespace std;

int main()
{
    try 
    {
        throw 10;
    }

    catch(char ch)
    {
        cout<<"Caught";
    }

    catch(...)
    {
        cout<<"Caught exception";
    }
}

