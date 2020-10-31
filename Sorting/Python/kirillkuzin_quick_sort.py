def quick_sort(arr):
    if len(arr) < 2:
        return arr
    support_elem = arr[0]
    less_elems = [i for i in arr[1:] if i <= support_elem]
    greater_elems = [i for i in arr[1:] if i > support_elem]
    return quick_sort(less_elems) + [support_elem] + quick_sort(greater_elems)


if __name__ == '__main__':
    test_arr = [5, 10, 1, 3, 12, 20, 25, 23, 4, 6, 11, 15]
    result = quick_sort(test_arr)
    print(result)
    assert result == sorted(test_arr)
    assert len(test_arr) == len(result)
