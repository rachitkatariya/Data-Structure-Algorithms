// Declaration of function will be before main func.

#include<iostream>
using namespace std;


int sum(int a, int b) {  // a,b are parameters
    int sum = a + b; 
    return sum;
}
int diff(int a, int b) {
    int diff = a - b; 
    return diff;
}

int main() {
    int s = sum(2,6);  // 2,6 are arguments
    cout<<"Sum is : "<<s<<endl;

    int d = diff(6,2);
    cout<<"Sum is : "<<d; 
}