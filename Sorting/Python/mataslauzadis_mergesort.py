def merge_sort(array):
    if len(array) <= 1:
        return array

    else:
        midpoint = len(array) // 2
        return merge(merge_sort(array[:midpoint]), merge_sort(array[midpoint:]))

def merge(a, b):
    merged = []
    left = 0
    right = 0

    while left < len(a) and right < len(b):
        if a[left] < b[right]:
            merged.append(a[left])
            left += 1
        else:
            merged.append(b[right])
            right += 1
        
    merged += a[left:]
    merged += b[right:]

    return merged

print(merge_sort([2,1]))
    