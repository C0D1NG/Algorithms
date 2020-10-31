"""
Contributed by GitHub User: sharmsourab93
Python : Bubble Sort
"""


# Method to Iterate through the array and print elements
def print_array(arr):
    for i in arr:
        print(i, end=" ")


# Bubble Sort Method
def bubble_sort(arr, size):
    for i in range(size):
        for j in range(size-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

    print_array(arr)


if __name__ == "__main__":
    array = [9, 8, 7, 6, 5, 12]
    bubble_sort(array, len(array))
