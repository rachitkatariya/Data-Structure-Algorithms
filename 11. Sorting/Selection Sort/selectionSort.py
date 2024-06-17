def print_arr(arr):
    print(" ".join(map(str, arr)))

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    print_arr(arr)

if __name__ == "__main__":
    arr = [5, 4, 1, 4, 2]
    selection_sort(arr)
