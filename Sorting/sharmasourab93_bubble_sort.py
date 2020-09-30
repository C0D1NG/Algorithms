"""
Contributed by GitHub User: sharmsourab93
Python : Bubble Sort
         Worst Case Performance: O(n^2), O(n^2) Swaps
         Best Case Performance: O(n), O(1) swaps
         Worst Case Space Complexity: O(1) Auxiliary Space
"""


def print_array(arr):
    for i in arr:
        print(i, end=" ")


def bubble_sort(arr, size):
    for i in range(size):
        for j in range(size-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

    print_array(arr)


if __name__ == "__main__":
    array = [9, 8, 7, 6, 5, 12]
    bubble_sort(array, len(array))
