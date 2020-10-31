# Python program for implementation of Quicksort Sort
 
# This function takes last element as central element, places
# the central element at its correct position in sorted
# array, and places all smaller (smaller than central element)
# to left of central element and all greater elements to right
# of central element
 
 
def partition(arr, low, high):
    i = (low-1)         # index of smaller element
    central_element = arr[high]     # central element
 
    for j in range(low, high):
 
        # If current element is smaller than or
        # equal to central element
        if arr[j] <= central_element:
 
            # increment index of smaller element
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]
 
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)
 
# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low  --> Starting index,
# high  --> Ending index
 
# Function to do Quick sort
 
 
def quickSort(arr, low, high):
    if len(arr) == 1:
        return arr
    if low < high:
 
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr, low, high)
 
        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
 
 
# Driver code to test above
arr = [10, 7, 8, 9, 1, 5]
n = len(arr)
quickSort(arr, 0, n-1)
print("Sorted array is:")
for i in range(n):
    print("%d" % arr[i])