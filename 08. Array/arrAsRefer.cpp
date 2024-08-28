#include <iostream>
using namespace std;


void printArr(int nums[], int n) {
    for(int i=0; i<n; i++) {
        cout << nums[i] << ",";
    }

    cout<< endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout<< "array size : " << sizeof(arr)<<endl;
    printArr(arr,n);
}





// void func(int arr[]){
//     arr[0] = 1000;
// }

// void func2(int *ptr) {
//     ptr[0] = 1000;
// }

/*

int a = 5;
int *ptr = &a;
cout<< ptr << endl; // 0x...address

int arr[] = {1, 2, 3, 4, 5,};
int n = sizeof(arr) / sizeof(int);

func(arr);   // passing array name is eq. to passing the pointer
cout<<arr[0];

func2(arr);

*/

// void printArr(int nums[])
// {
//     cout << sizeof(nums) << endl;
// }

// int main()
// {
//     int arr[]{1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     printArr(arr);
// }


