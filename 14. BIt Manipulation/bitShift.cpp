#include<iostream>
using namespace std;

int main() {

    // Left shift operator
    cout << (7 << 2) << endl;

    /*   
    a << b => a * 2^b    
    (7 << 2) = 7 * 2^2 = 28
    */
   
   // Right shift operator
   cout << (7 >> 2) << endl;

   /* 
   
    a >> b => a / 2^b    
    (7 >> 2) = 7 / 2^2 = 1
   
    */
}
