// Brute Force Approach  
// Time Complexity O(n^3)9876


/* 
#include<iostream>
#include <climits>
using namespace std;

void maxSubArraySum(int *arr, int n) {
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        } 
        cout<<endl;
    }
    cout<< "maximum subarray sum : " << maxSum;
}

int main() {
    int arr [6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum(arr, n);
} */




// Optimized Approach
// Time Complexity O(n^2)

#include<iostream>
#include <climits>
using namespace std;

void maxSubArraySum(int *arr, int n) {
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){ // start = 2
        int currSum = 0;
        for(int end=start; end<n; end++){ // end = 2, 3, 4, 5
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        } 
        cout<<endl;
    }
    cout<< "maximum subarray sum : " << maxSum;
}

int main() {
    int arr [6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum(arr, n);
} 
