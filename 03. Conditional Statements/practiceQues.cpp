#include <iostream>
using namespace std;

int main()
{



    // Even or Odd

   int num;
    cout<<"enter the number : ";
    cin>>num;

    if(num % 2 == 0) {
        cout<<"number is even";
    } else {
        cout<<"number is odd";
    } 


    // Find Greates number

    int a, b;
    cout << "Enter a ";
    cin >> a;

    cout << "Enter b ";
    cin >> b;

    if (a >= b)
    {
        cout << "a is larger : " << a;
    }

    else
    {
        cout << "b is larger  : " << b;
    } 


    // Calculating Tax

    int income;
    float tax;
    cout<< "enter income ( in Lakhs ) : ";
    cin>>income;

    if(income < 5) {
        tax = 0;
    } 
    
    else if(income <= 10) {
        tax = 0.2 * income;
    }

    else {
        tax = 0.3 * income; 
    }

    cout<<"Tax = " << (tax * 100000) << endl;


    // Find largest number b/w in three numbers

    int a,b,c;

    cout<<"enter a : ";
    cin >> a;
    cout<<"enter b : ";
    cin >> b;
    cout<<"enter c : ";
    cin >> c;

    if(a >= b && a >= c) {
        cout<< "Largest is a";
    }

    else if(b >= c) {
        cout<< "Largest is b";
    }

    else {
        cout<< "Largest is c";
    }
}