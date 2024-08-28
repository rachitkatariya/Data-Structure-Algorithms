#include<iostream>
using namespace std;

class Nest
{
    public:

    class sum
    {
        public:
        int s;
        void add(int a, int b)
        {
            s = a+b;
        }

        void show()
        {
            cout<<s;
        }
    };
};

int main()
{
    Nest::sum ob;

    ob.add(10,20);
    ob.show();
}