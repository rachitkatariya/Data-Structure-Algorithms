#include<iostream>
using namespace std;
 
int main() {
    int age;

    cout<<"Enter your age ";
    cin>>age;


    if(age >= 18) {
        cout<<"You can vote";
    }

    if(age >= 45) {
        cout<<" Contest for elections";
    }

    else{
        cout<<"You can not vote";
    }
}