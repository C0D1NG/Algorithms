def selection_sort(array):
    for i in range(len(array)-1):
        if array[i] > array[i+1]:
            swap(array, i, i+1)
    return array
        
def swap(array, a, b):
    temp = array[a]
    array[a] = array[b]
    array[b] = temp

print(selection_sort([1,4,2,4]))