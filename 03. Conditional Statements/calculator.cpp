#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<< "enter a : ";
    cin>> a;

    cout<< "enter b :";
    cin>> b;

    cout<< "enter operator : ";
    cin>> op;

    // Calculator using if else

    if(op == '+') {
        cout << "a+b = " << (a+b) <<endl;
    }

    else if (op == '-') {
        cout << "a-b + " << (a-b) <<endl;
    }
    else if (op == '*') {
        cout << "a*b + " << (a-b) <<endl;
    }
    else if (op == '/') {
        cout << "a/b + " << (a-b) <<endl;
    }

    else {
        cout<< "Enter valid operator ";
    }

    // Using Switch Case 

    switch(op) {
        case '+' : 
            cout << "a+b = " << (a+b) <<endl;
            break;
        case '-' :
            cout<< "a-b = " << (a-b) <<endl;
            break;
        case '*' :
            cout<< "a*b = " << (a*b) <<endl;
            break;
        case '/' :
            cout<< "a/b = " << (a/b) <<endl;
            break;

        default : 
            cout<<"enter valid case";
    }

}