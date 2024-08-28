#include<iostream>
using namespace std;

int main() {
    int num;
    for(num=1; num<=10; num++) {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Last value of num = "<<num <<endl;
}


/* #include<iostream>
using namespace std;

int main() {

    // Print sum of first N natural numbers


    int num;
    cout<<"Enter numbers : ";
    cin>>num;
    int sum = 0;

    for(int i=1; i<=num; i++){
        sum += i;  //sum = sum + i; formula : n(n+1)/2

    }
    cout<<"sum is : "<<sum;
} */