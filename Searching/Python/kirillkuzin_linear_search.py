def search(data, key):
    for i in range(len(data)):
        if data[i] == key:
            return i
    return -1


if __name__ == '__main__':
    test_data = [1, 5, 2, 7, 8, 'test', '123123', 87]
    index = search(test_data, 'test')
    assert index == 5
