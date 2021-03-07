#                                                                                   Count Sort


def Countsort(a):
    size = len(a)
    output = [0] * size

    # Initialize count array
    count = [0] * 10

    # Store the count of each elements in count array
    for i in range(0, size):
        count[a[i]] += 1

    # Store the cumulative count
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Find the index of each element of the original array in count array
    # place the elements in output array
    i = size - 1
    while i >= 0:
        output[count[a[i]] - 1] = a[i]
        count[a[i]] -= 1
        i -= 1

    # Copy the sorted elements into original array
    for i in range(0, size):
        a[i] = output[i]


list = [5, 3, 2, 7, 1, 9, 8]
countingSort(list)
print("Sorted list in Ascending Order: ",list)
