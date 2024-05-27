#include<iostream>
using namespace std;

int main() {


    /* int i = 1;
    while(i <= 10) {
        if( i == 3){
            break;
        }
        cout<< i << endl;
        i++;
    }

    cout<< "out of loop now"<< endl; */


    // Ques : WAP where user can keep entering numbers till they enter a multiple of 100.


    int n;

    do {
        cout << "Enter number : ";
        cin>>n;
        if(n % 10 == 0) {
            break;
        }

        cout<< "you entered : " << n <<endl;
    } while (true);

}