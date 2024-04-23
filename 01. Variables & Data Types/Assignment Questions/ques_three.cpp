/* 

Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)Output :
(P*R*T) / 100

*/

#include<iostream>
using namespace std;

int main() {

    float principle, rate, time;
    
    cout<<"Enter the Principle, Rate & Time : ";
    cin>>principle >> rate >> time;

    float simpleInt = (principle*rate*time)/100;

    cout<<"Simple Interest is : "<<simpleInt;
}

