#include<iostream>
using namespace std;

void oddOrEven(int nums){
    if(!(nums & 1)) {
        cout << "even " << endl;
    } else {
        cout << "odd " << endl;
    }
}

int main() {
    oddOrEven(5);
    oddOrEven(8);
}
