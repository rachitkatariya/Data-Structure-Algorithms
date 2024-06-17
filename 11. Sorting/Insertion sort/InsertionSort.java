// import java.util.Arrays;

public class InsertionSort {
    
    public static void print(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void insertionSort(int[] arr, int n) {
        for (int i = 1; i < n; i++) {
            int curr = arr[i];
            int prev = i - 1;
            while (prev >= 0 && arr[prev] > curr) {
                arr[prev + 1] = arr[prev];
                prev--;
            }
            arr[prev + 1] = curr;
        }
        print(arr, n);
    }

    public static void main(String[] args) {
        int[] arr = {5, 4, 1, 4, 2};
        insertionSort(arr, arr.length);
    }
}
