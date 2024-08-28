#include<iostream>
#include<cmath>
using namespace std;

int main() {

   /*  int num;
    cout<<"Enter number : ";
    cin>>num;

    bool isPrime = true;

    for(int i=2; i<num-1; i++) {
        if(num % 2 == 0) { // i is a factor is Num; i is completely divides n; n is Non-Prime
            isPrime = false;
        }
    }

    if(isPrime) {
        cout<< "number is prime" <<endl;
    } else {
        cout<< "number is Not Prime "<<endl;
    } */

   
   // Optimum Solution for Prime Number

    int num;
    cout<<"Enter number : ";
    cin>>num;

    bool isPrime = true;

    for(int i=2; i<=sqrt(num); i++) {
        if(num % 2 == 0) { // i is a factor is Num; i is completely divides n; n is Non-Prime
            isPrime = false;
        }
    }

    if(isPrime) {
        cout<< "number is prime" <<endl;
    } else {
        cout<< "number is Not Prime "<<endl;
    }


}
