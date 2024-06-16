public class BubbleSort {

    public static void printArr(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            boolean isSwap = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap elements arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    isSwap = true;
                }
            }

            if (!isSwap) {
                // array is already sorted
                break; // exit the loop early
            }
        }
        printArr(arr); // calling for printing the sorted array
    }

    public static void main(String[] args) {
        int[] arr = { 5, 4, 1, 4, 2 };
        bubbleSort(arr);
    }
}
