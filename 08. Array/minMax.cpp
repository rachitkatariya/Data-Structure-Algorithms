#include<iostream>
using namespace std;

int main() {

    int arr[] = {5,6,8,2,10};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++) {

        // for maximum
        if(arr[i] > max) {
            max = arr[i];
        }
        
        // for minimum
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout<< "largest : " << max << endl;
    cout<< "minimum : " << min << endl;
}