// Without using Extra Space (2 Pointer Approach)

#include<iostream>
using namespace std;


void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<< arr[i] << ",";
    }
    cout<<endl;
}
int main() {
    int arr[] = {3, 4, 6, 9, 1};
    int n = sizeof(arr) / sizeof(int);

    int start=0, end = n-1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr, n);
}









// Using Extra Space  


/*

#include<iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++){
        cout<<arr[i] << ",";
    }
    cout<<endl;
}

int main() {
    int arr[] = {3, 4, 6, 9, 1};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];
    for(int i=0; i<n; i++) {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i=0; i<n; i++) {
        arr[i] = copyArr[i];
    }

    printArr(arr, n);

    return 0;
} 

*/


// Space Complexity : O(n)
// Time Complexity : O(n+n) = O(2n) -> O(n)

// This method will take extra space.




