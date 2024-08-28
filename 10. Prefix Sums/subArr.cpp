#include<iostream>
using namespace std;

void printSubArrays(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){

            // with indexes
            // cout<< "(" << start << "," << end << ") ";

            // with sub arrays
            for(int i=start; i<=end; i++){
                cout<< arr[i];
            }
            cout<< ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr [6] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    printSubArrays(arr, n);
}