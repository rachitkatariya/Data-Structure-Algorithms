#include <iostream>
using namespace std;

int main()
{

    // Ques 1

    // int x = 2, y = 5;
    // int exp1 = (x * y / x);
    // int exp2 = (x * (y / x));
    // cout << exp1 << ",";
    // cout << exp2 << "\n";

    // Ques 2

    int x = 10, y = 5;
    int exp1 = (y * (x / y + x / y));
    int exp2 = (y * x / y + y * x / y);
    cout << exp1 << " ";
    cout << exp2 << "\n";
}
