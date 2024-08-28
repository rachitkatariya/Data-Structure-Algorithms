#include <iostream>
using namespace std;

int main()
{

    // Question 1 : Write a C++ program to get a number from the user and print whether  it's positive, negative or zero.

    // int num;
    // cout<<"enter the number : ";
    // cin>>num;

    // if(num > 0) {
    //     cout<<"number is positive ";
    // }
    // else if (num < 0) {
    //     cout<<" number is negative ";
    // }

    // else {
    //     cout<<"number is zero";
    // }

    // Question 2 : Write a C++ program that takes a year from the user and print whether that year is a leap year or not

    // int year;
    // cin >> year;
    // if (year % 400 == 0)
    // {
    //     cout << year << " is a leap year.\n";
    // }
    // else if (year % 100 == 0)
    // {
    //     cout << year << " is NOT a leap year.\n";
    // }
    // else if (year % 4 == 0)
    // {
    //     cout << year << " is a leap year.\n";
    // }
    // else
    // {
    //     cout << year << " is NOT a leap year.\n";
    // }


    // Question 3 : What will be the value of x & y in the following program:

    // int a = 63, b = 36;
    // bool x = (a<b) ? true:false;
    // int y = (a>b) ? a:b;
    // cout<<x<<" "<<y;


    // Question 4 : What’ll be the output of the program:

    int a = 5;

    if(++a*5 <= 25) { // ++a (6) * 5 = 30 <= 25 
        cout<<"Hello"<<endl; // not execute 
    }
    else {
        cout<<"Bye"; // will be execute
    }
}