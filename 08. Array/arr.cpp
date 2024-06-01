#include<iostream>
using namespace std;

int main() {
    
    /* int arr[5] = {7, 4, 7, 8, 3};
    int len = sizeof(arr) / sizeof(int); 

    for(int idx=0; idx<=len-1; idx++) {
        cout<< arr[idx] << " ";                  // idx = 0,1,2,3,4,5
    }

    return 0; */


    // simplified version 


    int arr[5] = {7, 4, 7, 8, 3};
    int n = sizeof(arr) / sizeof(int); 

    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";                  // idx = 0,1,2,3,4,5
    }

    return 0;


}