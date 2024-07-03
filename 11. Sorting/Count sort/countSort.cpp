#include<iostream>
#include<climits>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

void countSort(int arr[], int n){
   int freq[10000] = {0}; // range
   int minVal = INT_MAX, maxVal = INT_MIN;

   // 1st step - O(n)
   for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
   }

   //2nd step - O(range) = max - m
   for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
        arr[j++] = i;
        freq[i]--;
        }
   }
   print(arr, n);
}

int main()
{
    int arr[5] = {5, 4, 1, 4, 2};
    countSort(arr,5);

}
