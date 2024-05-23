#include<iostream>
using namespace std;

int main()
{

    // Implicit tpye Promotion 
    // Hierarchy of conversion are following ways.

    // bool -> char -> int -> double 

    cout<< (10/3) <<endl; // 3
    cout<< (10/3.0) <<endl;  //3.33333

    cout<< ('A' + 1) << endl;  // A = 65 

    // Explicit Conversion

    cout<<(int) ('A')<<endl;
    float PI = 3.14;

    cout<<(int) (PI)<<endl;

    cout<< (char) ('A' + 1);
}