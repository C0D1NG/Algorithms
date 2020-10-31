def binary_search(array, start, end, value):
    midpoint = (end+start) // 2

    if array[midpoint] == value:
        return midpoint
        
    if value >= array[midpoint]:
        return binary_search(array, midpoint, end, value)
    else:
        return binary_search(array, start, midpoint, value)

test = [1,2,3,4]
print(binary_search(test, 0, 4, 1))