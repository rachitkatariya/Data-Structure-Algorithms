def print_array(arr):
    for i in arr:
        print(i, end=' ')
    print()

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        curr = arr[i]
        prev = i - 1
        while prev >= 0 and arr[prev] > curr:
            arr[prev + 1] = arr[prev]
            prev -= 1
        arr[prev + 1] = curr
    print_array(arr)

if __name__ == "__main__":
    arr = [5, 4, 1, 4, 2]
    insertion_sort(arr)
