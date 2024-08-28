#include <iostream>
using namespace std;

int main() {

    bool isAdult; //1,0
    int age;
    cout<<"enter age : ";
    cin>>age;

    // if(age >= 18) {
    //     isAdult = true;
    // } else {
    //     isAdult = false;
    // }

    // another way 

    isAdult = age >= 18 ? true : false;

    cout<<isAdult;

}