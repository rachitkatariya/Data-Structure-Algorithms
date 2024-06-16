#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        bool isSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // if(arr[j] < arr[j+1]) for descending order
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
        printArr(arr, n); 
    }
}

int main()
{
    int arr[5] = {5, 4, 1, 4, 2};
    bubbleSort(arr, 5);
}
