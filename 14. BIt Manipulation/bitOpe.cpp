#include<iostream>
using namespace std;

int main() {

    // & (AND) operator
    cout << (3 & 5) << endl;

    // | (OR) operator
    cout << (3 | 5) << endl;

    // ^ (XOR) operator
    cout << (3 ^ 5) << endl;
}


/*  the terminology of them are following ways ---------------

    & Operator

    0 & 1 = 0
    0 & 0 = 0
    1 & 1 = 0
    1 & 1 = 1


    OR Operator

    0 | 0 = 0
    0 | 1 = 1
    1 | 0 = 1
    1 | 1 = 1

    ^ XOR Operator

    Same -> 0
    Different -> 1

    0 ^ 0 = 0
    1 ^ 1 = 0

    0 ^ 1 = 1
    1 ^ 0 = 1 

 */



/* 
    // One's Complement

    int main() {
        cout << (~6) << endl;
        cout << (~0) << endl;
    }



 */