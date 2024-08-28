#include<iostream>
using namespace std;

    // void changeA(int param) {
    //     param = 20;
    //     cout<< param << endl;
    // }

    // pass by reference using Pointer

void changeB(int *ptr) {
    *ptr = 20;
    cout<< *ptr <<endl;
}


int main(){
    int a = 10;
    // changeA(a);

    changeB(&a);
    cout<< a << endl;
    return 0;
}