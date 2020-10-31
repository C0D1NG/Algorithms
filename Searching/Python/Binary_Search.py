#BinarySearch  is a searching technique used to search an element in a Sorted arrayay.
#BinarySearch search works with only sorted arrayay.

def BinarySearch(array,n,key):
    start = 0
    end = n - 1
    while start <= end:
        mid = (start + end)//2
        if key == array[mid]:
            return mid
        elif key < array[mid]:
            end = mid - 1
        else:
            start = mid + 1
    return -1


array = [4, 5, 7, 45, 64, 66, 80, 81, 92, 99]
n = len(array)
key = 92
result = BinarySearch(array,n,key)
if result != -1:
    print("key is present in the array ")
else:
    print("key is not in the array")
