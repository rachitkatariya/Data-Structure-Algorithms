#include<iostream>
using namespace std;

int main() {
    
    // creation od dynamiccaly array 
    int n;
    cout<<" enter the length of an array ";
    cin>>n;

    int arr[n];
    // int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}