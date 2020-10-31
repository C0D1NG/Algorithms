array = [3, 4, 2, 6, 1, 9, 10]

length = len(array) - 1 
swap = 1

while swap != 0:

    swap = 0
    pos = 0

    while pos < length:
 
        if array[pos] > array[pos + 1]:

            array[pos], array[pos + 1] = array[pos + 1], array[pos]
            swap = swap + 1

        pos = pos + 1

print("Final array is:")
print(array)
