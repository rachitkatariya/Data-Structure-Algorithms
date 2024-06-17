def print_arr(arr):
    print(" ".join(map(str, arr)))

def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        is_swap = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:  # change to arr[j] < arr[j + 1] for descending order
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                is_swap = True
        if not is_swap:
            return
        print_arr(arr)

if __name__ == "__main__":
    arr = [5, 4, 1, 4, 2]
    bubble_sort(arr)
