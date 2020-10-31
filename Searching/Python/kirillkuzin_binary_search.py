def b_search(arr, value):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) / 2
        if arr[mid] < value:
            low = mid + 1
        elif arr[mid] > value:
            high = mid - 1
        else:
            return mid
    return None


if __name__ == '__main__':
    sorted_arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
    result = b_search(sorted_arr, 5)
    print(result)
    assert result == 4
