#include<iostream>
using namespace std;

bool isPowerOf2(int num){
    if(!(num & (num-1))){
        return true;
    } else {
        return false;
    }
    
}

int main() {
    cout << isPowerOf2(4) << endl;   
    cout << isPowerOf2(8) << endl;   
    cout << isPowerOf2(13) << endl;   
    cout << isPowerOf2(15) << endl;   
}
