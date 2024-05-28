#include <iostream>
using namespace std;

int main()
{



    // Print the reverse numbers

    int n = 20;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }



    // Question 1 : WAP to find the Factorial of a number entered by the user.

    /* int n = 6;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "factorial of " << n << " = " << fact << "\n"; */







    // Question 2 : WAP to print the multiplication table of a number, entered by the user.

    /* int n = 8;
    for (int i = 1; i <= 10; i++)
    {
        cout << (n * i) << " ";
    }
    cout << endl; */





    // Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.

    /* int n = 371;
    int num = n;
    int cubeSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /= 10;
    }
    if (n == cubeSum)
    {
        cout << "Armstrong number\n";
    }
    else
    {
        cout << "NOT an Armstrong number\n";
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
    cout << endl; */








    // Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.

   /*  int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";
    for (int i = 2; i < n; i++)
    {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n"; */


    
}