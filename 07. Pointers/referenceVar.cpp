#include<iostream>
using namespace std;


// pass by references using references variables
void changeA(int &a) {
    a = 20;
    cout<< a << endl;
}

int main(){
   int a = 10;
   changeA(a);
   cout<< a << endl;
   return 0;
}