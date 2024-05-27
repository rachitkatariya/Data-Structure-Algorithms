#include <iostream>
using namespace std;

int main()
{



    // Question 1 : WAP to find the Factorial of a number entered by the user.

    /* int n = 5;
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout<<fact; */







    // Question 2 : WAP to print the multiplication table of a number, entered by the user.

    /* int n;

    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0; */







    // Question 3 : WAP to input a number and check whether the number is an Armstron number or not

    /* int n = 371;
    int num = n;
    int cubSum = 0;


    while (num > 0) {
        int lastDigit = num % 10;                   // give last digit
        cubSum += lastDigit *lastDigit * lastDigit;
        num /= 10;                                  // remove last digit
    }

    if(n == cubSum) {
        cout<<"Armstrong Number";
    } else {
        cout<<"Not an Armstrong Number";
    } */











    // Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.

    /* int N = 15;
    for (int i = 2; i <= N; i++)
    {
        int curr = i; // current number to check for
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << " ";
        }
    }
    cout << endl;
 */









    // Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.


    int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";
    for (int i = 2; i < n; i++)
    {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n";



}

